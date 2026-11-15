	THUMB_FUNC_START sub_0809E900
sub_0809E900: @ 0x0809E900
	push {lr}
	ldr r3, _0809E924  @ =gRam
	ldr r0, _0809E928  @ =0x000016EA
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0809E920
	ldr r1, _0809E92C  @ =0x00001718
	add r0, r3, r1
	strb r2, [r0]
	bl sub_080A173C
_0809E920:
	pop {r0}
	bx r0
_0809E924:
	.4byte gRam
_0809E928:
	.4byte 0x000016EA
_0809E92C:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809E900

