	THUMB_FUNC_START sub_080A6170
sub_080A6170: @ 0x080A6170
	push {r4,lr}
	ldr r3, _080A61B0  @ =gRam
	ldr r1, _080A61B4  @ =0x00000964
	add r0, r3, r1
	ldrh r1, [r0]
	ldr r0, _080A61B8  @ =gUnknown_08169CE2
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #255
	beq _080A61D0
	ldrb r1, [r1]
	ldr r2, _080A61BC  @ =0x0000096C
	add r0, r3, r2
	strh r1, [r0]
	ldrh r2, [r0]
	ldr r0, _080A61C0  @ =gUnknown_0816B407
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _080A61C4  @ =0x00000978
	add r0, r3, r4
	strh r1, [r0]
	ldr r0, _080A61C8  @ =gUnknown_0816B3AE
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r2, #28
	bhi _080A61D0
	ldr r2, _080A61CC  @ =0x0000189E
	add r0, r3, r2
	strh r1, [r0]
	mov r0, #0
	b _080A61D2
	.byte 0x00
	.byte 0x00
_080A61B0:
	.4byte gRam
_080A61B4:
	.4byte 0x00000964
_080A61B8:
	.4byte gUnknown_08169CE2
_080A61BC:
	.4byte 0x0000096C
_080A61C0:
	.4byte gUnknown_0816B407
_080A61C4:
	.4byte 0x00000978
_080A61C8:
	.4byte gUnknown_0816B3AE
_080A61CC:
	.4byte 0x0000189E
_080A61D0:
	mov r0, #1
_080A61D2:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080A6170

