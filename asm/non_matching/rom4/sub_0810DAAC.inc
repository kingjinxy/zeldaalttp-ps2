	THUMB_FUNC_START sub_0810DAAC
sub_0810DAAC: @ 0x0810DAAC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810DADC  @ =gRam
	ldr r2, _0810DAE0  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r4, _0810DAE4  @ =0x00000EF2
	add r2, r3, r4
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, #21
	mov r0, #182
	lsl r0, r0, #5
	add r3, r3, r0
	strh r1, [r3]
	pop {r4}
	pop {r0}
	bx r0
_0810DADC:
	.4byte gRam
_0810DAE0:
	.4byte 0x00000ED2
_0810DAE4:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_0810DAAC

