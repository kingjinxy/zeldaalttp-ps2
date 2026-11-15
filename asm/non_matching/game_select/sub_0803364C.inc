	THUMB_FUNC_START sub_0803364C
sub_0803364C: @ 0x0803364C
	push {r4,r5,lr}
	ldr r4, _08033678  @ =gUnknown_0202DA50
	mov r0, #152
	lsl r0, r0, #3
	add r5, r4, r0
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803367C
	mov r0, #192
	lsl r0, r0, #1
	add r4, r4, r0
	sub r0, r0, #128
	add r5, r5, r0
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803367C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033678:
	.4byte gUnknown_0202DA50
	THUMB_FUNC_END sub_0803364C

