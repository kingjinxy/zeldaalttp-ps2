	THUMB_FUNC_START sub_08099D98
sub_08099D98: @ 0x08099D98
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08099DA4
	b _08099F70
_08099DA4:
	ldr r4, _08099E68  @ =gRam
	ldr r1, _08099E6C  @ =0x00001728
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08099E70  @ =0x00001729
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08099E74  @ =0x0000172A
	add r0, r4, r3
	strb r1, [r0]
	bl sub_0809A754
	ldr r0, _08099E78  @ =0x000016F8
	add r1, r4, r0
	ldrb r2, [r1]
	sub r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _08099DD2
	b _08099FEC
_08099DD2:
	strb r2, [r1]
	ldr r1, _08099E7C  @ =0x000016C8
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #254
	and r0, r0, r1
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #126
	bhi _08099DEA
	b _08099FEC
_08099DEA:
	ldr r2, _08099E80  @ =0x000016CF
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08099DFA
	b _08099FEC
_08099DFA:
	ldr r3, _08099E84  @ =0x00001702
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099E06
	b _08099FDC
_08099E06:
	ldr r1, _08099E88  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #73
	add r7, r4, r2
	ldrb r0, [r7]
	add r3, r3, #48
	add r6, r4, r3
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	beq _08099E38
	ldr r1, _08099E8C  @ =0x000016EA
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #48
	add r0, r4, r2
	strb r5, [r0]
	sub r3, r3, #71
	add r0, r4, r3
	strb r5, [r0]
	add r1, r1, #79
	add r0, r4, r1
	strb r5, [r0]
_08099E38:
	bl sub_0809A190
	ldr r2, _08099E90  @ =0x0000176C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08099E52
	ldr r3, _08099E94  @ =0x000017D4
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08099E52
	b _08099F90
_08099E52:
	ldr r0, _08099E98  @ =0x00001786
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08099E9C
	strb r5, [r1]
	mov r0, #13
	bl sub_0809E43C
	b _08099EAE
	.byte 0x00
	.byte 0x00
_08099E68:
	.4byte gRam
_08099E6C:
	.4byte 0x00001728
_08099E70:
	.4byte 0x00001729
_08099E74:
	.4byte 0x0000172A
_08099E78:
	.4byte 0x000016F8
_08099E7C:
	.4byte 0x000016C8
_08099E80:
	.4byte 0x000016CF
_08099E84:
	.4byte 0x00001702
_08099E88:
	.4byte 0x0000180D
_08099E8C:
	.4byte 0x000016EA
_08099E90:
	.4byte 0x0000176C
_08099E94:
	.4byte 0x000017D4
_08099E98:
	.4byte 0x00001786
_08099E9C:
	ldrb r0, [r6]
	cmp r0, #2
	beq _08099EAE
	ldrb r0, [r7]
	cmp r0, #4
	beq _08099EBA
	mov r0, #13
	bl sub_0809E43C
_08099EAE:
	ldr r0, _0809A0A8  @ =gRam
	ldr r1, _0809A0AC  @ =0x00001718
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #4
	bne _08099F0A
_08099EBA:
	ldr r3, _0809A0A8  @ =gRam
	ldr r0, _0809A0B0  @ =0x0000176E
	add r2, r3, r0
	mov r1, #0
	mov r0, #32
	strb r0, [r2]
	ldr r2, _0809A0B4  @ =0x0000180D
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #253
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #225
	add r0, r3, r2
	strb r1, [r0]
	ldr r1, _0809A0B8  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08099F02
	sub r2, r2, #191
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #2
	beq _08099F02
	ldr r0, _0809A0BC  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	beq _08099F02
	mov r0, #161
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
_08099F02:
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
_08099F0A:
	mov r0, #0
	bl sub_0809EEB4
	ldr r5, _0809A0A8  @ =gRam
	ldr r1, _0809A0C0  @ =0x000017E8
	add r0, r5, r1
	ldrh r1, [r0]
	mov r4, #1
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08099F28
	mov r0, #60
	bl sub_0809E43C
_08099F28:
	ldr r2, _0809A0C4  @ =0x000017EA
	add r0, r5, r2
	ldrh r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08099F48
	mov r0, #14
	bl sub_0812A484
	lsl r0, r0, #24
	cmp r0, #0
	bne _08099F48
	mov r0, #62
	bl sub_0809E43C
_08099F48:
	ldr r2, _0809A0A8  @ =gRam
	ldr r3, _0809A0C8  @ =0x000017D0
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08099F70
	ldr r0, _0809A0AC  @ =0x00001718
	add r1, r2, r0
	mov r0, #4
	strb r0, [r1]
	bl sub_080937AC
	bl sub_08092BF4
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
_08099F70:
	ldr r2, _0809A0A8  @ =gRam
	mov r3, #161
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r0, [r1]
	cmp r0, #2
	bne _08099F82
	mov r0, #0
	strb r0, [r1]
_08099F82:
	ldr r1, _0809A0CC  @ =0x00000B22
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08099F90
	bl sub_0808B1A8
_08099F90:
	ldr r1, _0809A0A8  @ =gRam
	ldr r2, _0809A0D0  @ =0x000016C8
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0809A0D4  @ =0x000016C9
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #57
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #23
	add r0, r1, r3
	strb r2, [r0]
	sub r3, r3, #20
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #133
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #130
	add r0, r1, r3
	strb r2, [r0]
	sub r3, r3, #131
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #132
	add r0, r1, r3
	strb r2, [r0]
	sub r3, r3, #28
	add r0, r1, r3
	strb r2, [r0]
	ldr r3, _0809A0D8  @ =0x000016CD
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0809A0DC  @ =0x000016CE
	add r1, r1, r0
	strb r2, [r1]
_08099FDC:
	ldr r0, _0809A0A8  @ =gRam
	ldr r2, _0809A0E0  @ =0x000016D4
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r3, _0809A0E4  @ =0x000016F8
	add r0, r0, r3
	strb r2, [r0]
_08099FEC:
	ldr r1, _0809A0A8  @ =gRam
	ldr r2, _0809A0AC  @ =0x00001718
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #5
	beq _0809A01A
	ldr r3, _0809A0E4  @ =0x000016F8
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r2, r0, #24
	lsr r0, r2, #24
	cmp r0, #32
	bls _0809A01A
	ldr r0, _0809A0E8  @ =0x0000174A
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809A072
	lsr r0, r2, #28
	strb r0, [r1]
_0809A01A:
	bl sub_08099C30
	ldr r5, _0809A0A8  @ =gRam
	ldr r1, _0809A0AC  @ =0x00001718
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #6
	beq _0809A06E
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809A03E
	bl sub_0809380C
	bl sub_08094460
_0809A03E:
	ldr r2, _0809A0EC  @ =0x00001727
	add r4, r5, r2
	ldrb r0, [r4]
	mov r1, #15
	and r1, r1, r0
	strb r1, [r4]
	bl sub_0809380C
	ldrb r0, [r4]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _0809A05E
	ldr r3, _0809A0DC  @ =0x000016CE
	add r0, r5, r3
	strb r1, [r0]
_0809A05E:
	ldrb r0, [r4]
	mov r1, #12
	and r1, r1, r0
	cmp r1, #0
	bne _0809A06E
	ldr r2, _0809A0D8  @ =0x000016CD
	add r0, r5, r2
	strb r1, [r0]
_0809A06E:
	bl sub_080978AC
_0809A072:
	ldr r4, _0809A0A8  @ =gRam
	ldr r3, _0809A0AC  @ =0x00001718
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #6
	beq _0809A08A
	bl sub_0809407C
	ldr r0, _0809A0F0  @ =0x0000178B
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_0809A08A:
	bl sub_0809E394
	ldr r1, _0809A0D0  @ =0x000016C8
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809A0F4
	cmp r0, #223
	bhi _0809A0F4
	ldr r2, _0809A0D4  @ =0x000016C9
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	b _0809A120
	.byte 0x00
	.byte 0x00
_0809A0A8:
	.4byte gRam
_0809A0AC:
	.4byte 0x00001718
_0809A0B0:
	.4byte 0x0000176E
_0809A0B4:
	.4byte 0x0000180D
_0809A0B8:
	.4byte 0x000009B2
_0809A0BC:
	.4byte gFlippers
_0809A0C0:
	.4byte 0x000017E8
_0809A0C4:
	.4byte 0x000017EA
_0809A0C8:
	.4byte 0x000017D0
_0809A0CC:
	.4byte 0x00000B22
_0809A0D0:
	.4byte 0x000016C8
_0809A0D4:
	.4byte 0x000016C9
_0809A0D8:
	.4byte 0x000016CD
_0809A0DC:
	.4byte 0x000016CE
_0809A0E0:
	.4byte 0x000016D4
_0809A0E4:
	.4byte 0x000016F8
_0809A0E8:
	.4byte 0x0000174A
_0809A0EC:
	.4byte 0x00001727
_0809A0F0:
	.4byte 0x0000178B
_0809A0F4:
	bl sub_0809EDA4
	ldr r2, _0809A128  @ =gRam
	ldr r3, _0809A12C  @ =0x00001714
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #15
	bne _0809A118
	ldr r0, _0809A130  @ =0x00001718
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	add r3, r3, #5
	add r1, r2, r3
	mov r0, #4
	strb r0, [r1]
_0809A118:
	ldr r0, _0809A134  @ =0x000016C8
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
_0809A120:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809A128:
	.4byte gRam
_0809A12C:
	.4byte 0x00001714
_0809A130:
	.4byte 0x00001718
_0809A134:
	.4byte 0x000016C8
	THUMB_FUNC_END sub_08099D98

