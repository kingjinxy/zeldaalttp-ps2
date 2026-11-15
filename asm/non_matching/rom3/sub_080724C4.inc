	THUMB_FUNC_START sub_080724C4
sub_080724C4: @ 0x080724C4
	push {r4,r5,lr}
	ldr r4, _0807253C  @ =gRam
	ldr r2, _08072540  @ =gUnknown_0814D37A
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r3, [r2]
	ldr r5, _08072544  @ =0x00000B74
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _08072548  @ =gUnknown_0814D5A2
	lsl r0, r0, #1
	add r2, r0, r2
	ldrh r2, [r2]
	add r3, r3, r2
	add r5, r5, #2
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _0807254C  @ =gUnknown_0814D3FA
	add r2, r1, r2
	ldrh r3, [r2]
	add r5, r5, #2
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _08072550  @ =gUnknown_0814D5A6
	add r2, r0, r2
	ldrh r2, [r2]
	add r3, r3, r2
	add r5, r5, #2
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _08072554  @ =gUnknown_0814D4A2
	add r2, r1, r2
	ldrh r3, [r2]
	add r5, r5, #10
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _08072558  @ =gUnknown_0814D5AA
	add r2, r0, r2
	ldrh r2, [r2]
	add r3, r3, r2
	add r5, r5, #2
	add r2, r4, r5
	strh r3, [r2]
	ldr r2, _0807255C  @ =gUnknown_0814D522
	add r1, r1, r2
	ldrh r2, [r1]
	ldr r3, _08072560  @ =0x00000B88
	add r1, r4, r3
	strh r2, [r1]
	ldr r1, _08072564  @ =gUnknown_0814D5AE
	add r0, r0, r1
	ldrh r0, [r0]
	add r2, r2, r0
	add r5, r5, #4
	add r4, r4, r5
	strh r2, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807253C:
	.4byte gRam
_08072540:
	.4byte gUnknown_0814D37A
_08072544:
	.4byte 0x00000B74
_08072548:
	.4byte gUnknown_0814D5A2
_0807254C:
	.4byte gUnknown_0814D3FA
_08072550:
	.4byte gUnknown_0814D5A6
_08072554:
	.4byte gUnknown_0814D4A2
_08072558:
	.4byte gUnknown_0814D5AA
_0807255C:
	.4byte gUnknown_0814D522
_08072560:
	.4byte 0x00000B88
_08072564:
	.4byte gUnknown_0814D5AE
	THUMB_FUNC_END sub_080724C4

