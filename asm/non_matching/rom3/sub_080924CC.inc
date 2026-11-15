	THUMB_FUNC_START sub_080924CC
sub_080924CC: @ 0x080924CC
	push {r4,lr}
	ldr r2, _0809253C  @ =0x00003634
	ldr r0, _08092540  @ =gUnknown_02018000
	add r3, r2, r0
	ldr r1, _08092544  @ =gUnknown_08155B4E
	ldr r4, _08092548  @ =0x00006DA0
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809254C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092550  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092554  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08092558  @ =0x00006DA6
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _0809255C  @ =0x00003638
	ldr r4, _08092540  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _08092560  @ =0x00006DA8
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809254C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092550  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092554  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08092564  @ =0x00006DAE
	add r1, r1, r3
	ldrh r0, [r1]
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809253C:
	.4byte 0x00003634
_08092540:
	.4byte gUnknown_02018000
_08092544:
	.4byte gUnknown_08155B4E
_08092548:
	.4byte 0x00006DA0
_0809254C:
	.4byte gUnknown_02018002
_08092550:
	.4byte gUnknown_02018040
_08092554:
	.4byte gUnknown_02018042
_08092558:
	.4byte 0x00006DA6
_0809255C:
	.4byte 0x00003638
_08092560:
	.4byte 0x00006DA8
_08092564:
	.4byte 0x00006DAE
	THUMB_FUNC_END sub_080924CC

