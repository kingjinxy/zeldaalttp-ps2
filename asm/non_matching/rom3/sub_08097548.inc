	THUMB_FUNC_START sub_08097548
sub_08097548: @ 0x08097548
	push {r4,lr}
	ldr r2, _08097598  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldr r1, _0809759C  @ =0x00000DAA
	add r0, r2, r1
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
	ldr r0, _080975A0  @ =0x000016C4
	add r4, r2, r0
	ldr r1, _080975A4  @ =0x00000DA8
	add r0, r2, r1
	ldrh r0, [r0]
	ldrh r1, [r4]
	add r0, r0, r1
	strh r0, [r4]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldrb r0, [r3]
	ldrb r1, [r1]
	sub r0, r0, r1
	ldr r3, _080975A8  @ =0x000016D6
	add r1, r2, r3
	strb r0, [r1]
	ldr r0, _080975AC  @ =0x00000961
	add r1, r2, r0
	ldrb r0, [r4]
	ldrb r1, [r1]
	sub r0, r0, r1
	ldr r1, _080975B0  @ =0x000016D7
	add r2, r2, r1
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08097598:
	.4byte gRam
_0809759C:
	.4byte 0x00000DAA
_080975A0:
	.4byte 0x000016C4
_080975A4:
	.4byte 0x00000DA8
_080975A8:
	.4byte 0x000016D6
_080975AC:
	.4byte 0x00000961
_080975B0:
	.4byte 0x000016D7
	THUMB_FUNC_END sub_08097548

