	THUMB_FUNC_START sub_08079338
sub_08079338: @ 0x08079338
	push {r4,lr}
	ldr r0, _08079398  @ =gRam
	ldr r2, _0807939C  @ =0x000009E6
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #25
	beq _08079352
	ldr r4, _080793A0  @ =0x000009E7
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #25
	bne _08079362
_08079352:
	ldr r1, _080793A4  @ =0x00000AAA
	add r0, r3, r1
	ldr r1, _080793A8  @ =gUnknown_081676B2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _08079390
_08079362:
	ldr r2, _080793AC  @ =gUnknown_08150EA4
	ldr r4, _080793B0  @ =0x00000ABE
	add r0, r3, r4
	ldrh r1, [r0]
	add r4, r4, #70
	add r0, r3, r4
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #1
	add r2, r1, r2
	ldrh r0, [r2]
	lsl r0, r0, #1
	ldr r2, _080793B4  @ =gUnknown_0201A000
	add r0, r0, r2
	ldr r2, _080793B8  @ =gUnknown_08150E84
	add r1, r1, r2
	ldrh r1, [r1]
	ldr r4, _080793BC  @ =0x0600A000
	add r1, r1, r4
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
_08079390:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08079398:
	.4byte gRam
_0807939C:
	.4byte 0x000009E6
_080793A0:
	.4byte 0x000009E7
_080793A4:
	.4byte 0x00000AAA
_080793A8:
	.4byte gUnknown_081676B2
_080793AC:
	.4byte gUnknown_08150EA4
_080793B0:
	.4byte 0x00000ABE
_080793B4:
	.4byte gUnknown_0201A000
_080793B8:
	.4byte gUnknown_08150E84
_080793BC:
	.4byte 0x0600A000
	THUMB_FUNC_END sub_08079338

