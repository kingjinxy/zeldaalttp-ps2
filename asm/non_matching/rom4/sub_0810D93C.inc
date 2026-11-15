	THUMB_FUNC_START sub_0810D93C
sub_0810D93C: @ 0x0810D93C
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _0810D95C  @ =gRam
	ldr r2, _0810D960  @ =0x00000FF2
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #5
	beq _0810D954
	cmp r0, #7
	bne _0810D964
_0810D954:
	add r0, r1, #0
	bl sub_0810D294
	b _0810D96A
_0810D95C:
	.4byte gRam
_0810D960:
	.4byte 0x00000FF2
_0810D964:
	add r0, r1, #0
	bl sub_0810D580
_0810D96A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810D93C

	.byte 0x00
	.byte 0x00
