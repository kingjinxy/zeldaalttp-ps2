	THUMB_FUNC_START sub_08014E60
sub_08014E60: @ 0x08014E60
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r4, #0
	ldm r0!, {r3}
	lsr r1, r3, #16
	mov r2, #6
	and r1, r1, r2
	lsl r5, r1, #24
	lsr r1, r5, #24
	str r1, [sp]
	ldr r7, _08014EA8  @ =0x00000FFF
	and r7, r7, r3
	mov r1, #192
	lsl r1, r1, #8
	mov r9, r1
	and r1, r1, r3
	mov r9, r1
	ldr r0, [r0]
	mov r8, r0
	add r0, r7, #0
	bl sub_08009380
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #39
	beq _08014F30
	cmp r0, #39
	bgt _08014EAC
	cmp r0, #38
	beq _08014EB4
	b _08015176
	.byte 0x00
	.byte 0x00
_08014EA8:
	.4byte 0x00000FFF
_08014EAC:
	cmp r0, #40
	bne _08014EB2
	b _08015028
_08014EB2:
	b _08015176
_08014EB4:
	mov r0, #1
	mov r10, r0
	lsr r1, r5, #25
	cmp r1, #1
	beq _08014EEE
	cmp r1, #1
	bgt _08014EC8
	cmp r1, #0
	beq _08014ED2
	b _08015176
_08014EC8:
	cmp r1, #2
	beq _08014F02
	cmp r1, #3
	beq _08014F16
	b _08015176
_08014ED2:
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #234
	bne _08014EEC
	b _08015090
_08014EEC:
	b _0801508A
_08014EEE:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #234
	bne _08014F00
	b _080150DC
_08014F00:
	b _080150D4
_08014F02:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #234
	bne _08014F14
	b _08015122
_08014F14:
	b _0801511C
_08014F16:
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #234
	bne _08014F2E
	b _08015174
_08014F2E:
	b _0801516C
_08014F30:
	mov r1, #2
	mov r10, r1
	lsr r1, r5, #25
	cmp r1, #1
	beq _08014F82
	cmp r1, #1
	bgt _08014F44
	cmp r1, #0
	beq _08014F4E
	b _08015176
_08014F44:
	cmp r1, #2
	beq _08014FB0
	cmp r1, #3
	beq _08014FDC
	b _08015176
_08014F4E:
	add r0, r7, #0
	sub r0, r0, #128
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014F68
	b _08015090
_08014F68:
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014F80
	b _08015090
_08014F80:
	b _0801508A
_08014F82:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014F94
	b _080150DC
_08014F94:
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014FAE
	b _080150DC
_08014FAE:
	b _080150D4
_08014FB0:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014FC2
	b _08015122
_08014FC2:
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014FDA
	b _08015122
_08014FDA:
	b _0801511C
_08014FDC:
	sub r0, r7, #2
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08014FF4
	b _08015174
_08014FF4:
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	beq _08015014
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
_08015014:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #238
	bne _08015026
	b _08015174
_08015026:
	b _0801516C
_08015028:
	mov r0, #3
	mov r10, r0
	lsr r1, r5, #25
	cmp r1, #1
	beq _08015094
	cmp r1, #1
	bgt _0801503C
	cmp r1, #0
	beq _08015046
	b _08015176
_0801503C:
	cmp r1, #2
	beq _080150E0
	cmp r1, #3
	beq _08015126
	b _08015176
_08015046:
	add r0, r7, #0
	sub r0, r0, #192
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015090
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015090
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015090
_0801508A:
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
_08015090:
	mov r4, #5
	b _08015176
_08015094:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _080150DC
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _080150DC
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _080150DC
_080150D4:
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
_080150DC:
	mov r4, #6
	b _08015176
_080150E0:
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015122
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015122
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015122
_0801511C:
	sub r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
_08015122:
	mov r4, #7
	b _08015176
_08015126:
	sub r0, r7, #3
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015174
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015174
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	mov r1, r9
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #247
	beq _08015174
_0801516C:
	add r0, r7, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r7, r0, #16
_08015174:
	mov r4, #8
_08015176:
	mov r2, #0
	ldr r6, _080151C0  @ =gUnknown_0202A030
	mov r3, #0
	ldr r0, _080151C4  @ =gUnknown_02016324
	mov r12, r6
	add r5, r0, #0
	ldrb r1, [r5]
	cmp r2, r1
	bcs _080151B0
	ldrb r0, [r6]
	cmp r4, r0
	bne _08015194
	ldrh r1, [r6, #6]
	cmp r7, r1
	beq _080151B4
_08015194:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r6, r6, #24
	ldrb r0, [r5]
	cmp r3, r0
	bcs _080151B0
	ldrb r1, [r6]
	cmp r4, r1
	bne _08015194
	ldrh r0, [r6, #6]
	cmp r7, r0
	bne _08015194
	mov r2, #1
_080151B0:
	cmp r2, #0
	beq _0801529C
_080151B4:
	ldr r0, [r6, #12]
	cmp r0, #0
	bne _080151C8
	mov r1, r8
	str r1, [r6, #12]
	b _080151DE
_080151C0:
	.4byte gUnknown_0202A030
_080151C4:
	.4byte gUnknown_02016324
_080151C8:
	ldr r0, [r6, #16]
	cmp r0, #0
	bne _080151D4
	mov r0, r8
	str r0, [r6, #16]
	b _080151DE
_080151D4:
	ldr r0, [r6, #20]
	cmp r0, #0
	bne _080151DE
	mov r1, r8
	str r1, [r6, #20]
_080151DE:
	ldrb r0, [r6, #3]
	add r0, r0, #1
	strb r0, [r6, #3]
	ldrb r1, [r6, #2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r1, r0
	bne _080152D0
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _080152D0
	mov r0, #6
	strb r0, [r5, #8]
	mov r0, #51
	strb r0, [r5, #9]
	mov r4, r10
	sub r4, r4, #1
	strb r4, [r5, #10]
	ldr r1, [sp]
	lsl r0, r1, #2
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #63
	and r0, r0, r7
	lsl r0, r0, #4
	add r0, r0, #8
	strh r0, [r5, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r7, r7, r0
	lsr r0, r7, #2
	add r0, r0, #8
	strh r0, [r5, #54]
	add r0, r5, #0
	add r0, r0, #80
	mov r1, r9
	strh r1, [r0]
	mov r0, #6
	add r1, r5, #0
	bl sub_08012728
	mov r3, #0
	add r6, r6, #8
	mov r9, r3
	ldr r7, _08015294  @ =gUnknown_08137B10
_0801523E:
	lsl r0, r3, #2
	add r0, r6, r0
	ldr r0, [r0]
	mov r8, r0
	cmp r0, #0
	beq _08015288
	ldrb r0, [r0, #8]
	cmp r0, #1
	bne _08015288
	mov r0, r8
	str r5, [r0, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	ldr r1, _08015298  @ =gUnknown_03006A30
	add r2, r0, r1
	mov r0, #12
	strb r0, [r2, #12]
	add r0, r2, #0
	add r0, r0, #56
	strb r4, [r0]
	add r0, r0, #1
	mov r1, r9
	strb r1, [r0]
	ldrh r0, [r2, #54]
	mov r1, #1
	orr r0, r0, r1
	strh r0, [r2, #54]
	mov r1, r8
	ldrb r0, [r1, #10]
	lsl r0, r0, #2
	add r0, r0, r7
	ldr r0, [r0]
	ldrb r1, [r5, #23]
	orr r0, r0, r1
	strb r0, [r5, #23]
_08015288:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #3
	bls _0801523E
	b _080152D0
_08015294:
	.4byte gUnknown_08137B10
_08015298:
	.4byte gUnknown_03006A30
_0801529C:
	ldrb r0, [r5]
	add r1, r0, #0
	cmp r1, #7
	bhi _080152D0
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #3
	mov r1, r12
	add r6, r0, r1
	strb r4, [r6]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r6, #1]
	mov r1, r10
	strb r1, [r6, #2]
	strb r2, [r6, #3]
	mov r0, r9
	strh r0, [r6, #4]
	strh r7, [r6, #6]
	mov r1, r8
	str r1, [r6, #8]
	str r2, [r6, #12]
	str r2, [r6, #16]
	str r2, [r6, #20]
_080152D0:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08014E60

