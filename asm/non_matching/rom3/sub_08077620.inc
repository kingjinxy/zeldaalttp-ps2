	THUMB_FUNC_START sub_08077620
sub_08077620: @ 0x08077620
	push {r4,lr}
	ldr r0, _0807765C  @ =gRam
	ldr r1, _08077660  @ =0x000009BA
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077684
	ldr r0, _08077664  @ =gUnknown_0201A000
	ldr r1, _08077668  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807766C  @ =gUnknown_0201B000
	ldr r1, _08077670  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077674  @ =gUnknown_02022000
	ldr r1, _08077678  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807767C  @ =gUnknown_02023000
	ldr r1, _08077680  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	b _080776B0
_0807765C:
	.4byte gRam
_08077660:
	.4byte 0x000009BA
_08077664:
	.4byte gUnknown_0201A000
_08077668:
	.4byte 0x0600C000
_0807766C:
	.4byte gUnknown_0201B000
_08077670:
	.4byte 0x0600D000
_08077674:
	.4byte gUnknown_02022000
_08077678:
	.4byte 0x0600A000
_0807767C:
	.4byte gUnknown_02023000
_08077680:
	.4byte 0x0600B000
_08077684:
	ldr r0, _080776B8  @ =gUnknown_0201E000
	ldr r1, _080776BC  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080776C0  @ =gUnknown_0201F000
	ldr r1, _080776C4  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080776C8  @ =gUnknown_02026000
	ldr r1, _080776CC  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080776D0  @ =gUnknown_02027000
	ldr r1, _080776D4  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
_080776B0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080776B8:
	.4byte gUnknown_0201E000
_080776BC:
	.4byte 0x0600C000
_080776C0:
	.4byte gUnknown_0201F000
_080776C4:
	.4byte 0x0600D000
_080776C8:
	.4byte gUnknown_02026000
_080776CC:
	.4byte 0x0600A000
_080776D0:
	.4byte gUnknown_02027000
_080776D4:
	.4byte 0x0600B000
	THUMB_FUNC_END sub_08077620

