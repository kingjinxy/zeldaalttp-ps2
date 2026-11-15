	THUMB_FUNC_START sub_081131A8
sub_081131A8: @ 0x081131A8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r4, #0
	ldr r1, _081131E8  @ =gRam
	ldr r3, _081131EC  @ =0x00000FC2
	add r0, r1, r3
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08113226
	sub r3, r3, #96
	add r0, r1, r3
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bne _0811320C
	add r0, r4, #0
	mov r1, #15
	bl sub_080C6E4C
	ldr r0, _081131F0  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #4
	bne _081131F4
	bl sub_08124D04
	b _08113226
_081131E8:
	.4byte gRam
_081131EC:
	.4byte 0x00000FC2
_081131F0:
	.4byte gUnknown_02010992
_081131F4:
	mov r0, #246
	add r1, r4, #0
	bl sub_080CA538
	cmp r0, #0
	blt _08113226
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #112
	bl sub_08112E80
	b _08113226
_0811320C:
	ldr r0, _0811322C  @ =0x00000F92
	add r1, r1, r0
	add r1, r2, r1
	ldr r2, _08113230  @ =gUnknown_0817D834
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _08113234  @ =gUnknown_0817D843
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
_08113226:
	pop {r4,r5}
	pop {r0}
	bx r0
_0811322C:
	.4byte 0x00000F92
_08113230:
	.4byte gUnknown_0817D834
_08113234:
	.4byte gUnknown_0817D843
	THUMB_FUNC_END sub_081131A8

