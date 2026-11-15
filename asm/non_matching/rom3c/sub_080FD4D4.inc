	THUMB_FUNC_START sub_080FD4D4
sub_080FD4D4: @ 0x080FD4D4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	mov r1, #95
	bl sub_080CF140
	ldr r4, _080FD5A0  @ =gRam
	ldr r1, _080FD5A4  @ =0x00000FA2
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _080FD5A8  @ =0x000015FA
	add r1, r4, r2
	strb r0, [r1]
	mov r6, #2
	add r5, r4, #0
	mov r0, #3
	mov r8, r0
	ldr r1, _080FD5AC  @ =0x00000F92
	add r1, r1, r5
	mov r10, r1
	ldr r2, _080FD5B0  @ =gUnknown_0817A9B7
	mov r9, r2
_080FD512:
	mov r0, #112
	add r1, r7, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r6, r6, #24
	cmp r4, #0
	blt _080FD584
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r0, _080FD5B4  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080FD5B8  @ =gUnknown_0817A9B1
	asr r3, r6, #24
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080FD5BC  @ =0x00000F12
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _080FD5C0  @ =gUnknown_0817A9B4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FD5C4  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r8
	strb r2, [r0]
	ldr r1, _080FD5C8  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r0, _080FD5CC  @ =0x00000FC2
	add r2, r5, r0
	add r2, r4, r2
	ldr r1, _080FD5A8  @ =0x000015FA
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, r3
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080FD5D0  @ =0x00001082
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_080FD584:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r6, r1
	lsr r6, r0, #24
	cmp r0, #0
	bge _080FD512
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD5A0:
	.4byte gRam
_080FD5A4:
	.4byte 0x00000FA2
_080FD5A8:
	.4byte 0x000015FA
_080FD5AC:
	.4byte 0x00000F92
_080FD5B0:
	.4byte gUnknown_0817A9B7
_080FD5B4:
	.4byte 0x00000F22
_080FD5B8:
	.4byte gUnknown_0817A9B1
_080FD5BC:
	.4byte 0x00000F12
_080FD5C0:
	.4byte gUnknown_0817A9B4
_080FD5C4:
	.4byte 0x00000F52
_080FD5C8:
	.4byte 0x00001172
_080FD5CC:
	.4byte 0x00000FC2
_080FD5D0:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080FD4D4

