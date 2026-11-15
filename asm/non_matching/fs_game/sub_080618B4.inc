	THUMB_FUNC_START sub_080618B4
sub_080618B4: @ 0x080618B4
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #100]
	str r1, [r7, #12]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #20]
	cmp r0, #4
	bne _080618CE
	b _08061B74
_080618CE:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #20]
	cmp r0, #5
	beq _080618DA
	b _080619EC
_080618DA:
	ldr r0, _080619E4  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080619E4  @ =gUnknown_03006A30
	ldr r3, [r7, #12]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _080619E8  @ =0x0000EFFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r1, [r2, #50]
	mov r2, #15
	bic r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r1, [r2, #54]
	mov r2, #15
	bic r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r0, #104]
	str r1, [r7, #12]
	ldr r0, _080619E4  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080619E4  @ =gUnknown_03006A30
	ldr r3, [r7, #12]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _080619E8  @ =0x0000EFFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r1, [r2, #50]
	mov r2, #15
	bic r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r1, [r2, #54]
	mov r2, #15
	bic r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08061B42
	.byte 0x00
	.byte 0x00
_080619E4:
	.4byte gUnknown_03006A30
_080619E8:
	.4byte 0x0000EFFF
_080619EC:
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #129
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, [r7, #12]
	mov r1, #192
	lsl r1, r1, #9
	str r1, [r0, #16]
	ldr r0, [r7, #12]
	mov r1, #128
	str r1, [r0, #12]
	ldr r1, [r7, #12]
	ldr r0, [r7]
	mov r2, #0
	bl sub_08062BFC
	ldr r1, [r7, #12]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08061B6C  @ =gUnknown_03006A30
	ldr r3, [r7, #12]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _08061B70  @ =0x0000EFFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r0, #104]
	str r1, [r7, #12]
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #129
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, [r7, #12]
	mov r1, #192
	lsl r1, r1, #9
	str r1, [r0, #16]
	ldr r0, [r7, #12]
	mov r1, #128
	str r1, [r0, #12]
	ldr r1, [r7, #12]
	ldr r0, [r7]
	mov r2, #1
	bl sub_08062BFC
	ldr r1, [r7, #12]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08061B6C  @ =gUnknown_03006A30
	ldr r3, [r7, #12]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _08061B70  @ =0x0000EFFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _08061B6C  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
_08061B42:
	ldr r0, [r7]
	ldr r1, [r7]
	mov r2, #0
	str r2, [r1, #104]
	mov r1, #0
	str r1, [r0, #100]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	bl sub_08061364
	b _08062016
	.byte 0x00
	.byte 0x00
_08061B6C:
	.4byte gUnknown_03006A30
_08061B70:
	.4byte 0x0000EFFF
_08061B74:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, [r2, #48]
	str r1, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, [r2, #52]
	str r1, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r3, [r2, #84]
	ldrh r1, [r1, #54]
	ldrh r2, [r3, #58]
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #23
	str r1, [r7, #8]
	add r0, r7, #6
	mov r1, #0
	strb r1, [r0]
_08061BD6:
	add r0, r7, #6
	ldrb r1, [r0]
	cmp r1, #1
	bls _08061BE0
	b _08061DA2
_08061BE0:
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, _08061CD0  @ =gUnknown_08141D44
	add r4, r7, #6
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldr r2, _08061CD4  @ =gUnknown_08141D54
	add r4, r7, #6
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	add r0, r7, #7
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #6
	ldrb r1, [r0]
	cmp r1, #0
	bne _08061C6C
	add r0, r7, #7
	add r1, r7, #7
	ldrb r2, [r1]
	mov r3, #4
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08061C6C:
	ldr r0, _08061CD8  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	cmp r1, #0
	beq _08061C84
	b _08061D84
_08061C84:
	ldr r0, [r7, #12]
	ldrb r1, [r0, #20]
	cmp r1, #19
	beq _08061C8E
	b _08061D84
_08061C8E:
	ldr r0, _08061CD8  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #13]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08061CDC
	ldr r0, _08061CD8  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	ldrb r0, [r2, #13]
	add r1, r7, #7
	ldrb r2, [r1]
	lsl r1, r2, #2
	cmp r0, r1
	beq _08061CDC
	b _08061D6C
	.byte 0x00
	.byte 0x00
_08061CD0:
	.4byte gUnknown_08141D44
_08061CD4:
	.4byte gUnknown_08141D54
_08061CD8:
	.4byte gUnknown_03006A30
_08061CDC:
	ldr r0, [r7, #12]
	add r1, r7, #7
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _08061D64  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #26]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #26]
	ldr r0, _08061D64  @ =gUnknown_03006A30
	ldr r2, [r7, #12]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08061D68  @ =gUnknown_08141DAC
	ldr r3, [r7, #12]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldr r2, [r7, #8]
	ldrb r3, [r2]
	add r2, r3, #0
	ldrh r3, [r1]
	add r1, r2, r3
	ldrh r2, [r0, #8]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #8]
	ldr r0, [r7, #12]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _08061D84
_08061D64:
	.4byte gUnknown_03006A30
_08061D68:
	.4byte gUnknown_08141DAC
_08061D6C:
	ldr r0, [r7, #12]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08061D84:
	ldr r0, [r7]
	ldr r1, [r0, #104]
	str r1, [r7, #12]
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #24
	str r1, [r7, #8]
	add r1, r7, #6
	add r0, r7, #6
	add r1, r7, #6
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08061BD6
_08061DA2:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08061E4C
	ldr r0, _08061E44  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #100]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #26]
	cmp r1, #128
	bne _08061E40
	add r0, r7, #4
	ldr r1, _08061E48  @ =gUnknown_03005E10
	ldr r2, [r7]
	ldr r3, [r2, #100]
	ldrb r2, [r3, #10]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #4
	ldrh r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08061E40
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #108
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #151
	bl 0x08003DFC
_08061E40:
	b _08061EEA
	.byte 0x00
	.byte 0x00
_08061E44:
	.4byte gUnknown_03006A30
_08061E48:
	.4byte gUnknown_03005E10
_08061E4C:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _08061EEA
	ldr r0, _08061F94  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #104]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #26]
	cmp r1, #128
	bne _08061EEA
	add r0, r7, #4
	ldr r1, _08061F98  @ =gUnknown_03005E10
	ldr r2, [r7]
	ldr r3, [r2, #104]
	ldrb r2, [r3, #10]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #4
	ldrh r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08061EEA
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #108
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #151
	bl 0x08003DFC
_08061EEA:
	ldr r0, [r7]
	ldr r1, _08061F9C  @ =gUnknown_08141D64
	ldr r3, [r7]
	ldrb r2, [r3, #23]
	ldr r3, [r7]
	ldrb r4, [r3, #24]
	lsl r3, r4, #2
	orr r2, r2, r3
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	add r2, r2, r4
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #47
	add r2, r0, #0
	add r0, r0, #47
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrb r0, [r1]
	cmp r0, #0
	beq _08062016
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #108
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #108
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrb r0, [r1]
	cmp r0, #0
	bne _08061FE8
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08061FA0
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #23
	str r1, [r7, #8]
	b _08061FA8
_08061F94:
	.4byte gUnknown_03006A30
_08061F98:
	.4byte gUnknown_03005E10
_08061F9C:
	.4byte gUnknown_08141D64
_08061FA0:
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #24
	str r1, [r7, #8]
_08061FA8:
	ldr r0, [r7, #8]
	ldrb r1, [r0]
	cmp r1, #1
	bne _08061FE6
	ldr r0, [r7, #8]
	mov r1, #2
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #108
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_08061FE6:
	b _08062016
_08061FE8:
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #110
	ldrh r2, [r3]
	ldr r1, [r1, #108]
	add r2, r1, r2
	str r2, [r0, #108]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r1, #108]
	mov r1, #128
	lsl r1, r1, #2
	cmp r0, r1
	bls _08062016
	ldr r0, [r7]
	ldr r1, [r0, #84]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r1, #108]
_08062016:
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080618B4

	.byte 0x00
	.byte 0x00
