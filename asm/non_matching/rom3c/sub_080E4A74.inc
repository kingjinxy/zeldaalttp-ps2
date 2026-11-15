	THUMB_FUNC_START sub_080E4A74
sub_080E4A74: @ 0x080E4A74
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080E4AE4  @ =gRam
	ldr r2, _080E4AE8  @ =0x00000FB2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r3, [r1]
	lsl r3, r3, #1
	add r2, r2, #160
	add r1, r4, r2
	add r0, r0, r1
	ldrb r0, [r0]
	orr r3, r3, r0
	lsl r3, r3, #24
	ldr r0, _080E4AEC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	ldr r1, _080E4AF0  @ =gUnknown_0817738C
	lsr r3, r3, #23
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E4AF4  @ =0x00000964
	add r5, r4, r2
	ldr r2, _080E4AF8  @ =gUnknown_0817739C
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r5, [r5]
	add r2, r2, r5
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E4AFC  @ =0x00000969
	add r4, r4, r3
	ldrb r4, [r4]
	mov r3, #48
	and r3, r3, r4
	mov r4, #8
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #206
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080E4AE4:
	.4byte gRam
_080E4AE8:
	.4byte 0x00000FB2
_080E4AEC:
	.4byte gUnknown_03003E74
_080E4AF0:
	.4byte gUnknown_0817738C
_080E4AF4:
	.4byte 0x00000964
_080E4AF8:
	.4byte gUnknown_0817739C
_080E4AFC:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080E4A74

