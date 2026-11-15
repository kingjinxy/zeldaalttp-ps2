	THUMB_FUNC_START sub_080B4F44
sub_080B4F44: @ 0x080B4F44
	push {r4-r6,lr}
	ldr r2, _080B4FC4  @ =gRam
	ldr r1, _080B4FC8  @ =0x00000AB2
	add r0, r2, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	ldr r1, _080B4FCC  @ =gUnknown_0816F702
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #240
	and r0, r0, r1
	lsr r6, r0, #4
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	strh r6, [r0]
	mov r5, #15
	and r5, r5, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	add r0, r5, r0
	cmp r0, #2
	bgt _080B4F76
	b _080B50A0
_080B4F76:
	add r3, r3, #254
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B4F82
	b _080B50A0
_080B4F82:
	ldr r1, _080B4FD0  @ =0x00000532
	add r0, r2, r1
	ldrh r0, [r0]
	mov r1, #192
	and r1, r1, r0
	cmp r1, #0
	bne _080B4F92
	b _080B50A0
_080B4F92:
	sub r3, r3, #234
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _080B4FD4  @ =0x00000A5C
	add r3, r2, r0
	mov r4, #255
	ldrb r0, [r3]
	strh r0, [r3]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080B4FE0
	sub r0, r6, #1
	ldrh r1, [r3]
	cmp r0, r1
	beq _080B50A0
	add r0, r1, #1
	strh r0, [r3]
	ldr r1, _080B4FD8  @ =0x0000096C
	add r2, r2, r1
	ldr r3, _080B4FDC  @ =0xFFFFFEC0
	add r0, r3, #0
	ldrh r1, [r2]
	add r0, r0, r1
	b _080B5002
_080B4FC4:
	.4byte gRam
_080B4FC8:
	.4byte 0x00000AB2
_080B4FCC:
	.4byte gUnknown_0816F702
_080B4FD0:
	.4byte 0x00000532
_080B4FD4:
	.4byte 0x00000A5C
_080B4FD8:
	.4byte 0x0000096C
_080B4FDC:
	.4byte 0xFFFFFEC0
_080B4FE0:
	add r0, r5, #0
	mov r1, #255
	eor r0, r0, r1
	add r0, r0, #2
	and r0, r0, r4
	ldrh r1, [r3]
	cmp r0, r1
	beq _080B50A0
	sub r0, r1, #2
	strh r0, [r3]
	ldr r0, _080B50A8  @ =0x0000096C
	add r2, r2, r0
	mov r1, #160
	lsl r1, r1, #2
	add r0, r1, #0
	ldrh r3, [r2]
	add r0, r0, r3
_080B5002:
	ldr r3, _080B50AC  @ =0x000007FF
	add r1, r3, #0
	and r0, r0, r1
	strh r0, [r2]
	bl sub_080B41C4
	bl sub_080B4080
	bl sub_080B4AB0
	ldr r4, _080B50B0  @ =gRam
	ldr r0, _080B50B4  @ =0x00000A5E
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080B50B8  @ =0x00000974
	add r0, r4, r1
	ldrh r3, [r0]
	mov r0, #192
	eor r0, r0, r3
	mov r1, #128
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #23
	ldr r1, _080B50BC  @ =0x00000958
	add r2, r4, r1
	ldr r1, _080B50C0  @ =gUnknown_0816F01C
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _080B50C4  @ =0x00000A62
	add r1, r4, r2
	strh r0, [r1]
	mov r0, #64
	and r0, r0, r3
	cmp r0, #0
	bne _080B5070
	ldr r3, _080B50A8  @ =0x0000096C
	add r2, r4, r3
	ldr r1, _080B50C8  @ =0xFFFFFEC0
	add r0, r1, #0
	ldrh r3, [r2]
	add r0, r0, r3
	ldr r3, _080B50AC  @ =0x000007FF
	add r1, r3, #0
	and r0, r0, r1
	strh r0, [r2]
	ldr r0, _080B50CC  @ =0x00000A5C
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080B5070:
	ldr r0, _080B50D0  @ =gUnknown_02003080
	ldr r1, _080B50D4  @ =0x0600C000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B50D8  @ =gUnknown_02003880
	ldr r1, _080B50DC  @ =0x0600D000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B50E0  @ =gUnknown_02004080
	ldr r1, _080B50E4  @ =0x0600A000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
	ldr r0, _080B50E8  @ =gUnknown_02004880
	ldr r1, _080B50EC  @ =0x0600B000
	mov r2, #128
	lsl r2, r2, #2
	bl CpuFastSet
_080B50A0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B50A8:
	.4byte 0x0000096C
_080B50AC:
	.4byte 0x000007FF
_080B50B0:
	.4byte gRam
_080B50B4:
	.4byte 0x00000A5E
_080B50B8:
	.4byte 0x00000974
_080B50BC:
	.4byte 0x00000958
_080B50C0:
	.4byte gUnknown_0816F01C
_080B50C4:
	.4byte 0x00000A62
_080B50C8:
	.4byte 0xFFFFFEC0
_080B50CC:
	.4byte 0x00000A5C
_080B50D0:
	.4byte gUnknown_02003080
_080B50D4:
	.4byte 0x0600C000
_080B50D8:
	.4byte gUnknown_02003880
_080B50DC:
	.4byte 0x0600D000
_080B50E0:
	.4byte gUnknown_02004080
_080B50E4:
	.4byte 0x0600A000
_080B50E8:
	.4byte gUnknown_02004880
_080B50EC:
	.4byte 0x0600B000
	THUMB_FUNC_END sub_080B4F44

