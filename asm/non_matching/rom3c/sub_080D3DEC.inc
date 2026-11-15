	THUMB_FUNC_START sub_080D3DEC
sub_080D3DEC: @ 0x080D3DEC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _080D3E14  @ =gRam
	ldr r2, _080D3E18  @ =0x00001AE2
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D3E24
	ldr r2, _080D3E1C  @ =0x00000F52
	add r0, r3, r2
	add r0, r1, r0
	mov r2, #0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080D3E20  @ =0x00001770
	add r0, r3, r1
	strb r2, [r0]
	b _080D3E50
_080D3E14:
	.4byte gRam
_080D3E18:
	.4byte 0x00001AE2
_080D3E1C:
	.4byte 0x00000F52
_080D3E20:
	.4byte 0x00001770
_080D3E24:
	ldr r0, _080D3E58  @ =0x00000F92
	add r2, r3, r0
	add r2, r4, r2
	ldr r1, _080D3E5C  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080D3E60  @ =0x00000FC2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3E50
	ldr r0, _080D3E64  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D3E50:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3E58:
	.4byte 0x00000F92
_080D3E5C:
	.4byte 0x00000996
_080D3E60:
	.4byte 0x00000FC2
_080D3E64:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3DEC

