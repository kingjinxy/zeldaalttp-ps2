	THUMB_FUNC_START sub_080A0030
sub_080A0030: @ 0x080A0030
	push {r4,r5,lr}
	ldr r4, _080A0074  @ =gRam
	ldr r0, _080A0078  @ =0x00000974
	add r5, r4, r0
	ldrh r1, [r5]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080A005E
	ldr r1, _080A007C  @ =0x0000171C
	add r3, r4, r1
	ldr r2, _080A0080  @ =gUnknown_081682FE
	ldr r1, _080A0084  @ =0x0000096C
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r3]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r3]
_080A005E:
	ldr r1, _080A0088  @ =0x0000097C
	add r0, r4, r1
	ldrh r1, [r0]
	ldrh r2, [r5]
	orr r1, r1, r2
	strh r1, [r0]
	bl sub_080A08B0
	pop {r4,r5}
	pop {r0}
	bx r0
_080A0074:
	.4byte gRam
_080A0078:
	.4byte 0x00000974
_080A007C:
	.4byte 0x0000171C
_080A0080:
	.4byte gUnknown_081682FE
_080A0084:
	.4byte 0x0000096C
_080A0088:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A0030

