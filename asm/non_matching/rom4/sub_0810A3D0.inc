	THUMB_FUNC_START sub_0810A3D0
sub_0810A3D0: @ 0x0810A3D0
	push {r4,lr}
	mov r3, #0
	ldr r2, _0810A424  @ =gRam
	ldr r1, _0810A428  @ =0x00001622
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r4, _0810A42C  @ =0x00001623
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _0810A430  @ =0x00000968
	add r0, r2, r4
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #7
	bhi _0810A41A
	ldr r1, _0810A434  @ =0x00001624
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r4, _0810A438  @ =0x00001625
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _0810A43C  @ =0x0000096C
	add r0, r2, r4
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #7
	bls _0810A41C
_0810A41A:
	mov r3, #1
_0810A41C:
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
_0810A424:
	.4byte gRam
_0810A428:
	.4byte 0x00001622
_0810A42C:
	.4byte 0x00001623
_0810A430:
	.4byte 0x00000968
_0810A434:
	.4byte 0x00001624
_0810A438:
	.4byte 0x00001625
_0810A43C:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_0810A3D0

