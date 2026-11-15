	THUMB_FUNC_START sub_0810BB04
sub_0810BB04: @ 0x0810BB04
	push {r4,lr}
	mov r0, #55
	mov r1, #0
	bl sub_080CA538
	ldr r3, _0810BB8C  @ =gRam
	ldr r2, _0810BB90  @ =0x00000F12
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	ldr r4, _0810BB94  @ =0x00000F72
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	add r4, r4, #64
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r4, _0810BB98  @ =0x000010F2
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _0810BB9C  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	sub r4, r4, #224
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	add r4, r4, #240
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _0810BBA0  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #204
	strb r2, [r1]
	ldr r4, _0810BBA4  @ =0x00000F02
	add r1, r3, r4
	add r1, r0, r1
	mov r2, #7
	strb r2, [r1]
	ldr r2, _0810BBA8  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #50
	strb r2, [r1]
	sub r4, r4, #16
	add r1, r3, r4
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	ldr r1, _0810BBAC  @ =0x00000E75
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #128
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_0810BB8C:
	.4byte gRam
_0810BB90:
	.4byte 0x00000F12
_0810BB94:
	.4byte 0x00000F72
_0810BB98:
	.4byte 0x000010F2
_0810BB9C:
	.4byte 0x00001052
_0810BBA0:
	.4byte 0x00000EE2
_0810BBA4:
	.4byte 0x00000F02
_0810BBA8:
	.4byte 0x00000ED2
_0810BBAC:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_0810BB04

