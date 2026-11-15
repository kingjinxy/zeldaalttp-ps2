	THUMB_FUNC_START sub_080B165C
sub_080B165C: @ 0x080B165C
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _080B16BC  @ =gUnknown_03003E74
	mov r0, #20
	strh r0, [r4]
	ldr r1, _080B16C0  @ =gRam
	ldr r0, _080B16C4  @ =0x00000964
	add r2, r1, r0
	mov r0, #45
	strh r0, [r2]
	ldr r2, _080B16C8  @ =gUnknown_0816E966
	ldr r3, _080B16CC  @ =0x000009E8
	add r0, r1, r3
	ldrh r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	sub r0, r0, #28
	sub r3, r3, #136
	add r2, r1, r3
	strh r0, [r2]
	ldr r0, _080B16D0  @ =0x00000996
	add r1, r1, r0
	ldrb r1, [r1]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #27
	ldrh r2, [r2]
	ldr r1, _080B16D4  @ =gUnknown_0816E964
	add r0, r0, r1
	ldrb r3, [r0]
	mov r1, #240
	lsl r1, r1, #7
	add r0, r1, #0
	orr r3, r3, r0
	mov r0, #2
	str r0, [sp]
	mov r0, #20
	mov r1, #45
	bl sub_080C6368
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080B16BC:
	.4byte gUnknown_03003E74
_080B16C0:
	.4byte gRam
_080B16C4:
	.4byte 0x00000964
_080B16C8:
	.4byte gUnknown_0816E966
_080B16CC:
	.4byte 0x000009E8
_080B16D0:
	.4byte 0x00000996
_080B16D4:
	.4byte gUnknown_0816E964
	THUMB_FUNC_END sub_080B165C

