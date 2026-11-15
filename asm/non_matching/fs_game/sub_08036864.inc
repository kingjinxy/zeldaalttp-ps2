	THUMB_FUNC_START sub_08036864
sub_08036864: @ 0x08036864
	push {r4,r7,lr}
	mov r7, sp
	ldr r0, _08036890  @ =gUnknown_03000834
	ldr r1, _08036890  @ =gUnknown_03000834
	ldr r2, _08036894  @ =gUnknown_03000BF0
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, _08036898  @ =gUnknown_08427B84
	ldr r1, _0803689C  @ =gUnknown_03000FC0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	bl _call_via_r4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036890:
	.4byte gUnknown_03000834
_08036894:
	.4byte gUnknown_03000BF0
_08036898:
	.4byte gUnknown_08427B84
_0803689C:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036864

