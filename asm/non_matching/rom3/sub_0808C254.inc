	THUMB_FUNC_START sub_0808C254
sub_0808C254: @ 0x0808C254
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	mov r10, r0
	str r1, [sp]
	str r3, [sp, #4]
	ldr r7, _0808C388  @ =gRam
	ldr r1, _0808C38C  @ =0x000009B2
	add r0, r7, r1
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	beq _0808C276
	b _0808CA00
_0808C276:
	ldr r2, _0808C390  @ =0x00000B5A
	add r0, r7, r2
	mov r1, #0
	strh r3, [r0]
	ldr r3, _0808C394  @ =0x00001736
	add r0, r7, r3
	strb r1, [r0]
	ldr r4, _0808C398  @ =0x00000C88
	add r0, r7, r4
	ldrh r1, [r0]
	ldr r5, [sp]
	sub r1, r5, r1
	ldr r6, _0808C39C  @ =0x00000C8A
	add r0, r7, r6
	ldrh r6, [r0]
	and r1, r1, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r0, #240
	mov r8, r0
	add r2, r1, #0
	and r2, r2, r0
	lsl r2, r2, #2
	ldr r4, _0808C3A0  @ =0x0000096C
	add r3, r7, r4
	mov r5, #128
	lsl r5, r5, #2
	add r0, r1, #0
	and r0, r0, r5
	lsl r0, r0, #4
	orr r2, r2, r0
	mov r4, #128
	lsl r4, r4, #1
	and r1, r1, r4
	lsl r1, r1, #3
	orr r2, r2, r1
	ldr r1, _0808C3A4  @ =0x00000C8C
	add r0, r7, r1
	ldrh r0, [r0]
	mov r1, r10
	sub r0, r1, r0
	and r0, r0, r6
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r0, #0
	mov r6, r8
	and r1, r1, r6
	lsr r1, r1, #3
	orr r2, r2, r1
	add r1, r0, #0
	and r1, r1, r5
	lsl r1, r1, #3
	orr r2, r2, r1
	and r0, r0, r4
	lsl r0, r0, #2
	orr r2, r2, r0
	strh r2, [r3]
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r2, _0808C3A8  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r4, _0808C3AC  @ =0x000016B6
	add r0, r7, r4
	strh r1, [r0]
	mov r5, #0
	ldrsh r0, [r3, r5]
	lsl r0, r0, #1
	ldr r6, _0808C3B0  @ =gUnknown_02018002
	add r0, r0, r6
	ldrh r1, [r0]
	ldr r2, _0808C3B4  @ =0x000016B8
	add r0, r7, r2
	strh r1, [r0]
	mov r4, #0
	ldrsh r0, [r3, r4]
	lsl r0, r0, #1
	ldr r5, _0808C3B8  @ =gUnknown_02018040
	add r0, r0, r5
	ldrh r1, [r0]
	ldr r6, _0808C3BC  @ =0x000016BA
	add r0, r7, r6
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r3, r1]
	lsl r0, r0, #1
	ldr r2, _0808C3C0  @ =gUnknown_02018042
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r3, _0808C3C4  @ =0x000016BC
	add r0, r7, r3
	strh r1, [r0]
	ldr r5, _0808C3C8  @ =0x0000178A
	add r4, r7, r5
	ldrb r1, [r4]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0808C340
	b _0808C50C
_0808C340:
	ldr r0, _0808C3CC  @ =0x0000086C
	bl sub_0808C148
	cmp r0, #1
	bne _0808C3E4
	add r6, r6, #10
	add r0, r7, r6
	ldr r2, _0808C3D0  @ =0x00000952
	add r1, r7, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _0808C3D4  @ =0x00000504
	add r1, r7, r3
	strh r0, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r7, r4
	ldr r5, _0808C3D8  @ =0x00000958
	add r2, r7, r5
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r6, _0808C3DC  @ =0x00000506
	add r2, r7, r6
	strh r0, [r2]
	mov r0, #34
	bl sub_0812A324
	bl sub_0808D3EC
	ldr r0, _0808C3E0  @ =0x0000372C
	bl sub_0808C1B4
	b _0808C4BE
	.byte 0x00
	.byte 0x00
_0808C388:
	.4byte gRam
_0808C38C:
	.4byte 0x000009B2
_0808C390:
	.4byte 0x00000B5A
_0808C394:
	.4byte 0x00001736
_0808C398:
	.4byte 0x00000C88
_0808C39C:
	.4byte 0x00000C8A
_0808C3A0:
	.4byte 0x0000096C
_0808C3A4:
	.4byte 0x00000C8C
_0808C3A8:
	.4byte gUnknown_02018000
_0808C3AC:
	.4byte 0x000016B6
_0808C3B0:
	.4byte gUnknown_02018002
_0808C3B4:
	.4byte 0x000016B8
_0808C3B8:
	.4byte gUnknown_02018040
_0808C3BC:
	.4byte 0x000016BA
_0808C3C0:
	.4byte gUnknown_02018042
_0808C3C4:
	.4byte 0x000016BC
_0808C3C8:
	.4byte 0x0000178A
_0808C3CC:
	.4byte 0x0000086C
_0808C3D0:
	.4byte 0x00000952
_0808C3D4:
	.4byte 0x00000504
_0808C3D8:
	.4byte 0x00000958
_0808C3DC:
	.4byte 0x00000506
_0808C3E0:
	.4byte 0x0000372C
_0808C3E4:
	mov r6, #1
	ldr r7, _0808C4C8  @ =0x00003728
	mov r5, #35
	ldr r0, _0808C4CC  @ =0x0000083C
	bl sub_0808C148
	cmp r0, #1
	beq _0808C412
	mov r6, #2
	sub r7, r7, #12
	mov r5, #12
	mov r0, #216
	bl sub_0808C148
	cmp r0, #1
	beq _0808C412
	ldr r0, _0808C4D0  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #1
	bne _0808C4BE
	mov r6, #4
	add r7, r7, #4
_0808C412:
	ldr r4, _0808C4D4  @ =gRam
	ldr r1, _0808C4D8  @ =0x000016C4
	add r0, r4, r1
	ldr r2, _0808C4DC  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _0808C4E0  @ =0x00000504
	add r1, r4, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldr r3, _0808C4E4  @ =0x00000958
	add r2, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _0808C4E8  @ =0x00000506
	add r2, r4, r3
	strh r0, [r2]
	add r0, r5, #0
	bl sub_0812A324
	ldr r0, _0808C4EC  @ =0x0000097C
	add r5, r4, r0
	strh r7, [r5]
	ldr r1, _0808C4F0  @ =0x0000096C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	bl sub_080925A4
	bl sub_0813386C
	mov r3, #0
	ldrsh r0, [r5, r3]
	bl sub_0808C1B4
	mov r5, #16
	neg r5, r5
	add r1, r5, #0
	mov r3, r10
	and r3, r3, r1
	mov r7, #150
	lsl r7, r7, #4
	add r5, r4, r7
	strh r3, [r5]
	ldr r0, [sp]
	and r0, r0, r1
	ldr r1, _0808C4F4  @ =0x00000964
	add r2, r4, r1
	strh r0, [r2]
	ldr r7, _0808C4F8  @ =0x00001732
	add r1, r4, r7
	strb r0, [r1]
	ldr r0, _0808C4FC  @ =0x00001733
	add r1, r4, r0
	mov r7, #0
	ldrsh r0, [r2, r7]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	ldr r1, _0808C500  @ =0x00001734
	add r0, r4, r1
	strb r3, [r0]
	ldr r3, _0808C504  @ =0x00001735
	add r1, r4, r3
	mov r7, #0
	ldrsh r0, [r5, r7]
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	ldr r0, _0808C508  @ =0x00001736
	add r4, r4, r0
	strb r6, [r4]
	cmp r6, #0
	beq _0808C4BE
	ldrb r0, [r4]
	bl Sprite_SpawnImmediatelySmashedTerrain
	bl sub_08116C98
_0808C4BE:
	mov r0, #1
	ldr r1, [sp, #4]
	str r0, [r1]
	b _0808C9D2
	.byte 0x00
	.byte 0x00
_0808C4C8:
	.4byte 0x00003728
_0808C4CC:
	.4byte 0x0000083C
_0808C4D0:
	.4byte 0x00001CA8
_0808C4D4:
	.4byte gRam
_0808C4D8:
	.4byte 0x000016C4
_0808C4DC:
	.4byte 0x00000952
_0808C4E0:
	.4byte 0x00000504
_0808C4E4:
	.4byte 0x00000958
_0808C4E8:
	.4byte 0x00000506
_0808C4EC:
	.4byte 0x0000097C
_0808C4F0:
	.4byte 0x0000096C
_0808C4F4:
	.4byte 0x00000964
_0808C4F8:
	.4byte 0x00001732
_0808C4FC:
	.4byte 0x00001733
_0808C500:
	.4byte 0x00001734
_0808C504:
	.4byte 0x00001735
_0808C508:
	.4byte 0x00001736
_0808C50C:
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0808C53C
	mov r6, #2
	mov r0, #216
	bl sub_0808C148
	cmp r0, #0
	beq _0808C522
	b _0808C8E0
_0808C522:
	mov r6, #4
	ldr r0, _0808C538  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #0
	beq _0808C530
	b _0808C8E0
_0808C530:
	mov r0, #1
	ldr r2, [sp, #4]
	str r0, [r2]
	b _0808C9D2
_0808C538:
	.4byte 0x00001CA8
_0808C53C:
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0808C57C
	ldr r0, _0808C574  @ =0x00000DF8
	bl sub_0808C148
	cmp r0, #0
	beq _0808C550
	b _0808C804
_0808C550:
	mov r6, #2
	mov r0, #216
	bl sub_0808C148
	cmp r0, #0
	beq _0808C55E
	b _0808C8E0
_0808C55E:
	mov r6, #4
	ldr r0, _0808C578  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #0
	beq _0808C56C
	b _0808C8E0
_0808C56C:
	mov r0, #1
	ldr r3, [sp, #4]
	str r0, [r3]
	b _0808C9D2
_0808C574:
	.4byte 0x00000DF8
_0808C578:
	.4byte 0x00001CA8
_0808C57C:
	mov r0, #208
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #226
	lsl r0, r0, #1
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #212
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	ldr r0, _0808C640  @ =0x00000434
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	ldr r0, _0808C644  @ =0x0000043C
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #225
	lsl r0, r0, #2
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #226
	lsl r0, r0, #2
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #218
	lsl r0, r0, #2
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #248
	lsl r0, r0, #2
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	mov r0, #135
	lsl r0, r0, #3
	bl sub_0808C148
	cmp r0, #1
	beq _0808C658
	ldr r0, _0808C648  @ =0x00000DF8
	bl sub_0808C148
	cmp r0, #1
	bne _0808C5F8
	b _0808C804
_0808C5F8:
	mov r6, #2
	mov r0, #216
	bl sub_0808C148
	cmp r0, #1
	bne _0808C606
	b _0808C8E0
_0808C606:
	mov r6, #4
	ldr r0, _0808C64C  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #1
	bne _0808C614
	b _0808C8E0
_0808C614:
	mov r6, #16
	ldrb r0, [r4]
	cmp r0, #0
	bne _0808C62A
	ldr r0, _0808C650  @ =gSword
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _0808C636
_0808C62A:
	ldr r0, _0808C654  @ =0x00000404
	bl sub_0808C148
	cmp r0, #1
	bne _0808C636
	b _0808C8E0
_0808C636:
	mov r0, #0
	ldr r4, [sp, #4]
	str r0, [r4]
	b _0808CA0C
	.byte 0x00
	.byte 0x00
_0808C640:
	.4byte 0x00000434
_0808C644:
	.4byte 0x0000043C
_0808C648:
	.4byte 0x00000DF8
_0808C64C:
	.4byte 0x00001CA8
_0808C650:
	.4byte gSword
_0808C654:
	.4byte 0x00000404
_0808C658:
	ldr r1, _0808C694  @ =gRam
	ldr r5, _0808C698  @ =0x0000180C
	add r0, r1, r5
	ldrb r5, [r0]
	add r7, r1, #0
	cmp r5, #1
	beq _0808C668
	b _0808C7FC
_0808C668:
	ldr r0, _0808C69C  @ =gFlute
	ldrb r0, [r0]
	cmp r0, #0
	bne _0808C6B0
	ldr r6, _0808C6A0  @ =0x000009C6
	add r0, r7, r6
	ldrh r0, [r0]
	cmp r0, #42
	bne _0808C6B0
	ldr r1, _0808C6A4  @ =0x0000096C
	add r0, r7, r1
	mov r2, #0
	ldrsh r4, [r0, r2]
	ldr r0, _0808C6A8  @ =0x00000492
	bl sub_08092568
	cmp r4, r0
	bne _0808C744
	ldr r3, _0808C6AC  @ =0x00000B5A
	add r0, r7, r3
	strh r5, [r0]
	b _0808C744
_0808C694:
	.4byte gRam
_0808C698:
	.4byte 0x0000180C
_0808C69C:
	.4byte gFlute
_0808C6A0:
	.4byte 0x000009C6
_0808C6A4:
	.4byte 0x0000096C
_0808C6A8:
	.4byte 0x00000492
_0808C6AC:
	.4byte 0x00000B5A
_0808C6B0:
	ldr r4, _0808C6F4  @ =0x000009C6
	add r0, r7, r4
	ldrh r2, [r0]
	ldr r5, _0808C6F8  @ =gUnknown_02002280
	add r0, r2, r5
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0808C744
	cmp r2, #50
	bne _0808C6D6
	ldr r6, _0808C6FC  @ =0x0000096C
	add r0, r7, r6
	mov r3, #0
	ldrsh r1, [r0, r3]
	ldr r0, _0808C700  @ =0x00000DD6
	cmp r1, r0
	beq _0808C6E8
_0808C6D6:
	cmp r2, #83
	bne _0808C710
	ldr r4, _0808C6FC  @ =0x0000096C
	add r0, r7, r4
	mov r5, #0
	ldrsh r1, [r0, r5]
	ldr r0, _0808C704  @ =0x0000080E
	cmp r1, r0
	bne _0808C710
_0808C6E8:
	ldr r0, _0808C708  @ =gRam
	ldr r6, _0808C70C  @ =0x00000B5A
	add r0, r0, r6
	mov r1, #3
	b _0808C742
	.byte 0x00
	.byte 0x00
_0808C6F4:
	.4byte 0x000009C6
_0808C6F8:
	.4byte gUnknown_02002280
_0808C6FC:
	.4byte 0x0000096C
_0808C700:
	.4byte 0x00000DD6
_0808C704:
	.4byte 0x0000080E
_0808C708:
	.4byte gRam
_0808C70C:
	.4byte 0x00000B5A
_0808C710:
	ldr r1, _0808C7C8  @ =0x000009C6
	add r0, r7, r1
	ldrh r2, [r0]
	cmp r2, #42
	bne _0808C728
	ldr r3, _0808C7CC  @ =0x0000096C
	add r0, r7, r3
	mov r4, #0
	ldrsh r1, [r0, r4]
	ldr r0, _0808C7D0  @ =0x0000081E
	cmp r1, r0
	beq _0808C73A
_0808C728:
	cmp r2, #10
	bne _0808C744
	ldr r5, _0808C7CC  @ =0x0000096C
	add r0, r7, r5
	mov r6, #0
	ldrsh r1, [r0, r6]
	ldr r0, _0808C7D4  @ =0x00000A1E
	cmp r1, r0
	bne _0808C744
_0808C73A:
	ldr r0, _0808C7D8  @ =gRam
	ldr r7, _0808C7DC  @ =0x00000B5A
	add r0, r0, r7
	mov r1, #2
_0808C742:
	strh r1, [r0]
_0808C744:
	ldr r0, _0808C7E0  @ =0x00003724
	ldr r4, _0808C7D8  @ =gRam
	ldr r1, _0808C7E4  @ =0x0000097C
	add r5, r4, r1
	strh r0, [r5]
	ldr r2, _0808C7CC  @ =0x0000096C
	add r0, r4, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	bl sub_080925A4
	bl sub_0813386C
	mov r6, #0
	ldrsh r0, [r5, r6]
	bl sub_0808C1B4
	mov r7, #16
	neg r7, r7
	add r1, r7, #0
	mov r3, r10
	and r3, r3, r1
	mov r0, #150
	lsl r0, r0, #4
	add r5, r4, r0
	strh r3, [r5]
	ldr r0, [sp]
	and r0, r0, r1
	ldr r1, _0808C7E8  @ =0x00000964
	add r2, r4, r1
	strh r0, [r2]
	ldr r6, _0808C7EC  @ =0x00001732
	add r1, r4, r6
	strb r0, [r1]
	ldr r7, _0808C7F0  @ =0x00001733
	add r1, r4, r7
	mov r6, #0
	ldrsh r0, [r2, r6]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	add r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	ldr r0, _0808C7F4  @ =0x00001735
	add r1, r4, r0
	mov r3, #0
	ldrsh r0, [r5, r3]
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	ldr r5, _0808C7F8  @ =0x00001736
	add r4, r4, r5
	ldrb r0, [r4]
	cmp r0, #0
	beq _0808C7C0
	bl Sprite_SpawnImmediatelySmashedTerrain
	bl sub_08116C98
_0808C7C0:
	mov r0, #1
	ldr r6, [sp, #4]
	str r0, [r6]
	b _0808C9D2
_0808C7C8:
	.4byte 0x000009C6
_0808C7CC:
	.4byte 0x0000096C
_0808C7D0:
	.4byte 0x0000081E
_0808C7D4:
	.4byte 0x00000A1E
_0808C7D8:
	.4byte gRam
_0808C7DC:
	.4byte 0x00000B5A
_0808C7E0:
	.4byte 0x00003724
_0808C7E4:
	.4byte 0x0000097C
_0808C7E8:
	.4byte 0x00000964
_0808C7EC:
	.4byte 0x00001732
_0808C7F0:
	.4byte 0x00001733
_0808C7F4:
	.4byte 0x00001735
_0808C7F8:
	.4byte 0x00001736
_0808C7FC:
	mov r0, #0
	ldr r7, [sp, #4]
	str r0, [r7]
	b _0808CA0C
_0808C804:
	ldr r7, _0808C8B4  @ =gRam
	ldr r1, _0808C8B8  @ =0x0000180C
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _0808C8D8
	mov r0, r10
	sub r0, r0, #8
	mov r2, #16
	neg r2, r2
	add r4, r2, #0
	and r0, r0, r4
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r7
	mov r8, r3
	strh r0, [r3]
	ldr r0, [sp]
	sub r0, r0, #8
	and r0, r0, r4
	ldr r5, _0808C8BC  @ =0x00000964
	add r6, r7, r5
	strh r0, [r6]
	ldr r0, _0808C8C0  @ =0x00001736
	add r0, r0, r7
	mov r9, r0
	mov r0, #3
	mov r1, r9
	strb r0, [r1]
	ldr r0, _0808C8C4  @ =0x00003714
	ldr r2, _0808C8C8  @ =0x0000097C
	add r5, r7, r2
	strh r0, [r5]
	ldr r3, _0808C8CC  @ =0x0000096C
	add r0, r7, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	bl sub_0813386C
	mov r2, #0
	ldrsh r0, [r5, r2]
	bl sub_0808C1B4
	mov r2, r10
	and r2, r2, r4
	mov r3, r8
	strh r2, [r3]
	ldr r0, [sp]
	and r0, r0, r4
	strh r0, [r6]
	ldr r4, _0808C8D0  @ =0x00001732
	add r1, r7, r4
	strb r0, [r1]
	ldr r5, _0808C8D4  @ =0x00001733
	add r1, r7, r5
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r3, #255
	lsl r3, r3, #8
	and r0, r0, r3
	asr r0, r0, #8
	strb r0, [r1]
	add r4, r4, #2
	add r0, r7, r4
	strb r2, [r0]
	add r5, r5, #2
	add r1, r7, r5
	mov r6, r8
	mov r7, #0
	ldrsh r0, [r6, r7]
	and r0, r0, r3
	asr r0, r0, #8
	strb r0, [r1]
	mov r1, r9
	ldrb r0, [r1]
	cmp r0, #0
	beq _0808C8AA
	bl Sprite_SpawnImmediatelySmashedTerrain
	bl sub_08116C98
_0808C8AA:
	mov r0, #1
	ldr r2, [sp, #4]
	str r0, [r2]
	b _0808C9D2
	.byte 0x00
	.byte 0x00
_0808C8B4:
	.4byte gRam
_0808C8B8:
	.4byte 0x0000180C
_0808C8BC:
	.4byte 0x00000964
_0808C8C0:
	.4byte 0x00001736
_0808C8C4:
	.4byte 0x00003714
_0808C8C8:
	.4byte 0x0000097C
_0808C8CC:
	.4byte 0x0000096C
_0808C8D0:
	.4byte 0x00001732
_0808C8D4:
	.4byte 0x00001733
_0808C8D8:
	mov r0, #0
	ldr r3, [sp, #4]
	str r0, [r3]
	b _0808CA0C
_0808C8E0:
	ldr r0, _0808C8FC  @ =gRam
	ldr r4, _0808C900  @ =0x0000180C
	add r1, r0, r4
	ldrb r1, [r1]
	add r7, r0, #0
	cmp r1, #1
	beq _0808C972
	ldr r0, _0808C904  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #1
	bne _0808C90C
	ldr r0, _0808C908  @ =0x00003720
	b _0808C918
_0808C8FC:
	.4byte gRam
_0808C900:
	.4byte 0x0000180C
_0808C904:
	.4byte 0x00001CA8
_0808C908:
	.4byte 0x00003720
_0808C90C:
	ldr r0, _0808C938  @ =0x00000404
	bl sub_0808C148
	cmp r0, #1
	bne _0808C948
	ldr r0, _0808C93C  @ =0x00003718
_0808C918:
	ldr r5, _0808C940  @ =0x0000097C
	add r4, r7, r5
	strh r0, [r4]
	ldr r1, _0808C944  @ =0x0000096C
	add r0, r7, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	bl sub_080925A4
	bl sub_0813386C
	mov r3, #0
	ldrsh r0, [r4, r3]
	bl sub_0808C1B4
	b _0808C968
_0808C938:
	.4byte 0x00000404
_0808C93C:
	.4byte 0x00003718
_0808C940:
	.4byte 0x0000097C
_0808C944:
	.4byte 0x0000096C
_0808C948:
	ldr r0, _0808C9DC  @ =0x0000371C
	ldr r5, _0808C9E0  @ =0x0000097C
	add r4, r7, r5
	strh r0, [r4]
	ldr r1, _0808C9E4  @ =0x0000096C
	add r0, r7, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	bl sub_080925A4
	bl sub_0813386C
	mov r3, #0
	ldrsh r0, [r4, r3]
	bl sub_0808C1B4
_0808C968:
	ldr r1, _0808C9E8  @ =gRam
	ldr r4, _0808C9EC  @ =0x00001736
	add r0, r1, r4
	strb r6, [r0]
	add r7, r1, #0
_0808C972:
	mov r5, #16
	neg r5, r5
	add r1, r5, #0
	mov r3, r10
	and r3, r3, r1
	mov r6, #150
	lsl r6, r6, #4
	add r4, r7, r6
	strh r3, [r4]
	ldr r0, [sp]
	and r0, r0, r1
	ldr r1, _0808C9F0  @ =0x00000964
	add r2, r7, r1
	strh r0, [r2]
	ldr r5, _0808C9F4  @ =0x00001732
	add r1, r7, r5
	strb r0, [r1]
	ldr r6, _0808C9F8  @ =0x00001733
	add r1, r7, r6
	mov r5, #0
	ldrsh r0, [r2, r5]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	add r6, r6, #1
	add r0, r7, r6
	strb r3, [r0]
	ldr r0, _0808C9FC  @ =0x00001735
	add r1, r7, r0
	mov r3, #0
	ldrsh r0, [r4, r3]
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	ldr r4, _0808C9EC  @ =0x00001736
	add r1, r7, r4
	ldrb r0, [r1]
	cmp r0, #0
	beq _0808C9CC
	bl Sprite_SpawnImmediatelySmashedTerrain
	bl sub_08116C98
_0808C9CC:
	mov r0, #1
	ldr r5, [sp, #4]
	str r0, [r5]
_0808C9D2:
	mov r0, r10
	ldr r1, [sp]
	bl sub_080691D8
	b _0808CA0C
_0808C9DC:
	.4byte 0x0000371C
_0808C9E0:
	.4byte 0x0000097C
_0808C9E4:
	.4byte 0x0000096C
_0808C9E8:
	.4byte gRam
_0808C9EC:
	.4byte 0x00001736
_0808C9F0:
	.4byte 0x00000964
_0808C9F4:
	.4byte 0x00001732
_0808C9F8:
	.4byte 0x00001733
_0808C9FC:
	.4byte 0x00001735
_0808CA00:
	add r0, r2, #0
	bl sub_08081928
	ldr r6, [sp, #4]
	str r0, [r6]
	mov r0, #0
_0808CA0C:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0808C254

