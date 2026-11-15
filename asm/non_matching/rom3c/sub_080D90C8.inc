	THUMB_FUNC_START sub_080D90C8
sub_080D90C8: @ 0x080D90C8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r7, _080D9100  @ =gRam
	ldr r1, _080D9104  @ =0x00000FC2
	add r0, r7, r1
	add r5, r4, r0
	ldrb r1, [r5]
	add r6, r1, #0
	cmp r6, #0
	beq _080D9110
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080D9124
	ldr r0, _080D9108  @ =0x00000FB2
	add r2, r7, r0
	add r2, r4, r2
	ldr r1, _080D910C  @ =0x00001082
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2]
	b _080D9124
_080D9100:
	.4byte gRam
_080D9104:
	.4byte 0x00000FC2
_080D9108:
	.4byte 0x00000FB2
_080D910C:
	.4byte 0x00001082
_080D9110:
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #8
	strb r1, [r5]
	ldr r1, _080D912C  @ =0x00000F52
	add r0, r7, r1
	add r0, r4, r0
	strb r6, [r0]
_080D9124:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D912C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D90C8

