	THUMB_FUNC_START sub_080D1F10
sub_080D1F10: @ 0x080D1F10
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r4, #0
	ldr r3, _080D1F64  @ =gRam
	ldr r1, _080D1F68  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #24
	and r0, r0, r1
	cmp r0, #0
	beq _080D1F2A
	mov r4, #3
_080D1F2A:
	ldr r1, _080D1F6C  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	strb r4, [r0]
	ldr r1, _080D1F70  @ =0x00001627
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D1F5C
	ldr r0, _080D1F74  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D1F78  @ =0x00000F12
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #248
	strb r1, [r0]
	ldr r1, _080D1F7C  @ =0x00000F22
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #240
	strb r1, [r0]
_080D1F5C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1F64:
	.4byte gRam
_080D1F68:
	.4byte 0x00000996
_080D1F6C:
	.4byte 0x00000F92
_080D1F70:
	.4byte 0x00001627
_080D1F74:
	.4byte 0x00000F52
_080D1F78:
	.4byte 0x00000F12
_080D1F7C:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080D1F10

