	THUMB_FUNC_START sub_080FD5D4
sub_080FD5D4: @ 0x080FD5D4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	mov r1, #95
	bl sub_080CF140
	ldr r2, _080FD664  @ =gRam
	ldr r1, _080FD668  @ =0x00000FA2
	add r0, r2, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	mov r5, #3
	add r6, r2, #0
	mov r0, #4
	mov r8, r0
	ldr r1, _080FD66C  @ =0x00001172
	add r1, r1, r6
	mov r9, r1
_080FD602:
	mov r0, #112
	add r1, r7, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r5, r5, #24
	cmp r4, #0
	blt _080FD64A
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r0, _080FD670  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080FD674  @ =gUnknown_0817A9BF
	asr r2, r5, #24
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FD678  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r0, _080FD67C  @ =gUnknown_0817A9C3
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080FD680  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, r8
	strb r1, [r0]
	mov r1, r9
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
_080FD64A:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r5, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _080FD602
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD664:
	.4byte gRam
_080FD668:
	.4byte 0x00000FA2
_080FD66C:
	.4byte 0x00001172
_080FD670:
	.4byte 0x00000F22
_080FD674:
	.4byte gUnknown_0817A9BF
_080FD678:
	.4byte 0x00000F12
_080FD67C:
	.4byte gUnknown_0817A9C3
_080FD680:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FD5D4

