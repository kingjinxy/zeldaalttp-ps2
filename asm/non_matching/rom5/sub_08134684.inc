	THUMB_FUNC_START sub_08134684
sub_08134684: @ 0x08134684
	push {r4-r6,lr}
	ldr r0, _081346D8  @ =0x08133A59
	mov r1, #2
	neg r1, r1
	and r0, r0, r1
	ldr r1, _081346DC  @ =gUnknown_03006D18
	ldr r2, _081346E0  @ =0x04000100
	bl CpuSet
	ldr r0, _081346E4  @ =gUnknown_02030A80
	bl sub_08134A84
	ldr r0, _081346E8  @ =gUnknown_02031AC0
	bl sub_08134940
	ldr r0, _081346EC  @ =0x0093F800
	bl sub_08134C20
	ldr r0, _081346F0  @ =0x00000020
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	beq _081346D2
	ldr r5, _081346F4  @ =gUnknown_083C3A3C
	add r6, r0, #0
_081346B6:
	ldr r4, [r5]
	ldr r1, [r5, #4]
	ldrb r2, [r5, #8]
	add r0, r4, #0
	bl sub_08134DC4
	ldrh r0, [r5, #10]
	strb r0, [r4, #11]
	ldr r0, _081346F8  @ =gUnknown_020322C0
	str r0, [r4, #24]
	add r5, r5, #12
	sub r6, r6, #1
	cmp r6, #0
	bne _081346B6
_081346D2:
	pop {r4-r6}
	pop {r0}
	bx r0
_081346D8:
	.4byte 0x08133A59
_081346DC:
	.4byte gUnknown_03006D18
_081346E0:
	.4byte 0x04000100
_081346E4:
	.4byte gUnknown_02030A80
_081346E8:
	.4byte gUnknown_02031AC0
_081346EC:
	.4byte 0x0093F800
_081346F0:
	.4byte 0x00000020
_081346F4:
	.4byte gUnknown_083C3A3C
_081346F8:
	.4byte gUnknown_020322C0
	THUMB_FUNC_END sub_08134684

