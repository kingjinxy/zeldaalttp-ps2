	THUMB_FUNC_START sub_08124938
sub_08124938: @ 0x08124938
	push {r4-r6,lr}
	sub sp, sp, #8
	mov r4, sp
	add r4, r4, #6
	add r0, sp, #4
	add r1, r4, #0
	bl sub_080C1820
	ldr r6, _08124974  @ =gUnknown_03003E74
	ldrh r0, [r6]
	add r1, sp, #4
	ldrh r1, [r1]
	ldrh r2, [r4]
	ldr r3, _08124978  @ =0x00003C44
	ldr r4, _0812497C  @ =gRam
	ldr r5, _08124980  @ =0x00001735
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #2
	orr r4, r4, r5
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
_08124974:
	.4byte gUnknown_03003E74
_08124978:
	.4byte 0x00003C44
_0812497C:
	.4byte gRam
_08124980:
	.4byte 0x00001735
	THUMB_FUNC_END sub_08124938

