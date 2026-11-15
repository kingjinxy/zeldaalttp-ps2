	THUMB_FUNC_START sub_080D9860
sub_080D9860: @ 0x080D9860
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D9894  @ =gRam
	ldr r2, _080D9898  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #1
	mov r2, #1
	and r1, r1, r2
	ldr r2, _080D989C  @ =0x00000FD2
	add r3, r3, r2
	add r3, r0, r3
	ldrb r3, [r3]
	mov r2, #2
	and r2, r2, r3
	orr r1, r1, r2
	lsl r1, r1, #5
	ldr r2, _080D98A0  @ =gUnknown_0817589C
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
_080D9894:
	.4byte gRam
_080D9898:
	.4byte 0x00001052
_080D989C:
	.4byte 0x00000FD2
_080D98A0:
	.4byte gUnknown_0817589C
	THUMB_FUNC_END sub_080D9860

