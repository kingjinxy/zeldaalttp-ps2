	THUMB_FUNC_START sub_0809B8D0
sub_0809B8D0: @ 0x0809B8D0
	push {lr}
	ldr r2, _0809B920  @ =gRam
	ldr r0, _0809B924  @ =0x00001806
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809B91A
	ldr r3, _0809B928  @ =0x000016CD
	add r1, r2, r3
	mov r0, #4
	strb r0, [r1]
	ldr r0, _0809B92C  @ =0x000016CE
	add r1, r2, r0
	mov r0, #21
	strb r0, [r1]
	ldr r1, _0809B930  @ =0x000016CF
	add r0, r2, r1
	mov r1, #24
	strb r1, [r0]
	add r3, r3, #127
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _0809B934  @ =0x000016F8
	add r1, r2, r0
	mov r0, #16
	strb r0, [r1]
	sub r3, r3, #74
	add r1, r2, r3
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0809B938  @ =0x00001718
	add r1, r2, r0
	mov r0, #6
	strb r0, [r1]
_0809B91A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809B920:
	.4byte gRam
_0809B924:
	.4byte 0x00001806
_0809B928:
	.4byte 0x000016CD
_0809B92C:
	.4byte 0x000016CE
_0809B930:
	.4byte 0x000016CF
_0809B934:
	.4byte 0x000016F8
_0809B938:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809B8D0

