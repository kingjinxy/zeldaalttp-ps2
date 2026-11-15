	THUMB_FUNC_START sub_0809EEB4
sub_0809EEB4: @ 0x0809EEB4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _0809EEF8  @ =gRam
	ldr r0, _0809EEFC  @ =0x00001714
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strh r5, [r0]
	cmp r5, #8
	bne _0809EF08
	ldr r2, _0809EF00  @ =0x000017A6
	add r0, r4, r2
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #7
	bls _0809EEEE
	b _0809F3C4
_0809EEEE:
	ldr r0, _0809EF04  @ =gUnknown_0816822F
	add r0, r1, r0
	ldrb r0, [r0]
	add r0, r0, #64
	b _0809EF26
_0809EEF8:
	.4byte gRam
_0809EEFC:
	.4byte 0x00001714
_0809EF00:
	.4byte 0x000017A6
_0809EF04:
	.4byte gUnknown_0816822F
_0809EF08:
	cmp r5, #9
	bne _0809EF1C
	ldr r3, _0809EF18  @ =0x000016D5
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #80
	b _0809EF26
	.byte 0x00
	.byte 0x00
_0809EF18:
	.4byte 0x000016D5
_0809EF1C:
	ldr r6, _0809EFA0  @ =0x000016D5
	add r1, r4, r6
	lsl r0, r5, #3
	ldrb r1, [r1]
	add r0, r0, r1
_0809EF26:
	ldr r4, _0809EFA4  @ =gRam
	ldr r1, _0809EFA8  @ =0x000016C4
	add r1, r1, r4
	mov r10, r1
	ldr r1, _0809EFAC  @ =gUnknown_081681D4
	lsr r2, r0, #1
	lsl r2, r2, #1
	add r1, r2, r1
	mov r3, r10
	mov r6, #0
	ldrsh r0, [r3, r6]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _0809EFB0  @ =0x00000A0E
	add r3, r4, r1
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r6, _0809EFB4  @ =0x00000964
	add r1, r4, r6
	mov r6, #0
	mov r8, r6
	strh r0, [r1]
	mov r0, #182
	lsl r0, r0, #5
	add r7, r4, r0
	ldr r0, _0809EFB8  @ =gUnknown_0816817C
	add r2, r2, r0
	ldrh r0, [r2]
	ldrh r1, [r7]
	add r0, r0, r1
	ldrh r1, [r3]
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	ldr r3, _0809EFBC  @ =0x00000974
	add r0, r4, r3
	mov r6, #1
	mov r9, r6
	mov r6, #1
	strh r6, [r0]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bls _0809EF96
	cmp r5, #6
	beq _0809EF96
	cmp r5, #7
	beq _0809EF96
	cmp r5, #8
	beq _0809EF96
	cmp r5, #9
	bne _0809EFC0
_0809EF96:
	mov r0, #0
	bl sub_080A0534
	b _0809F3C4
	.byte 0x00
	.byte 0x00
_0809EFA0:
	.4byte 0x000016D5
_0809EFA4:
	.4byte gRam
_0809EFA8:
	.4byte 0x000016C4
_0809EFAC:
	.4byte gUnknown_081681D4
_0809EFB0:
	.4byte 0x00000A0E
_0809EFB4:
	.4byte 0x00000964
_0809EFB8:
	.4byte gUnknown_0816817C
_0809EFBC:
	.4byte 0x00000974
_0809EFC0:
	bl sub_080A0454
	cmp r5, #5
	bne _0809EFCA
	b _0809F3C4
_0809EFCA:
	ldr r1, _0809F06C  @ =0x000017E8
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0809F0A0
	ldrb r0, [r7]
	add r1, r0, #0
	add r1, r1, #8
	mov r0, #15
	and r1, r1, r0
	cmp r1, #3
	ble _0809EFEC
	cmp r1, #11
	bhi _0809EFEC
	b _0809F200
_0809EFEC:
	mov r2, r10
	ldrb r0, [r2]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #3
	ble _0809EFFE
	cmp r1, #11
	bhi _0809EFFE
	b _0809F200
_0809EFFE:
	ldr r3, _0809F070  @ =0x000017AA
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F00A
	b _0809F200
_0809F00A:
	ldr r6, _0809F074  @ =0x00001702
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F016
	b _0809F200
_0809F016:
	ldr r1, _0809F078  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809F08C
	bl sub_08070064
	mov r0, #76
	bl sub_0809E43C
	ldr r2, _0809F07C  @ =0x00001719
	add r0, r4, r2
	mov r3, r8
	strb r3, [r0]
	ldr r6, _0809F080  @ =0x000009AC
	add r1, r4, r6
	mov r0, #7
	strb r0, [r1]
	ldr r0, _0809F084  @ =0x000009AD
	add r1, r4, r0
	mov r0, #22
	strb r0, [r1]
	ldr r1, _0809F088  @ =0x000009DA
	add r3, r4, r1
	ldrh r2, [r3]
	add r6, r6, #48
	add r0, r4, r6
	strh r2, [r0]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	mov r2, #207
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r3]
	bl sub_0809E4FC
	b _0809F200
	.byte 0x00
	.byte 0x00
_0809F06C:
	.4byte 0x000017E8
_0809F070:
	.4byte 0x000017AA
_0809F074:
	.4byte 0x00001702
_0809F078:
	.4byte 0x000009B2
_0809F07C:
	.4byte 0x00001719
_0809F080:
	.4byte 0x000009AC
_0809F084:
	.4byte 0x000009AD
_0809F088:
	.4byte 0x000009DA
_0809F08C:
	mov r3, #187
	lsl r3, r3, #5
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F09A
	b _0809F200
_0809F09A:
	bl sub_080A3A94
	b _0809F200
_0809F0A0:
	mov r2, #187
	lsl r2, r2, #5
	add r0, r4, r2
	mov r3, r8
	strb r3, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809F0E4
	ldr r6, _0809F0DC  @ =0x000017E1
	add r1, r4, r6
	mov r0, #2
	strb r0, [r1]
	bl sub_0809DC3C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809F0C8
	b _0809F3C4
_0809F0C8:
	ldr r1, _0809F0E0  @ =0x00001702
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F0D4
	b _0809F3C4
_0809F0D4:
	mov r0, #60
	bl sub_0809E43C
	b _0809F3C4
_0809F0DC:
	.4byte 0x000017E1
_0809F0E0:
	.4byte 0x00001702
_0809F0E4:
	ldr r2, _0809F140  @ =0x000017EA
	add r0, r4, r2
	ldrh r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809F184
	ldr r3, _0809F144  @ =0x000017E1
	add r0, r4, r3
	mov r6, r9
	strb r6, [r0]
	ldr r1, _0809F148  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0809F158
	sub r2, r2, #22
	add r1, r4, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _0809F158
	sub r3, r3, #117
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809F158
	ldr r0, _0809F14C  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809F126
	b _0809F3C4
_0809F126:
	mov r6, r8
	strb r6, [r1]
	ldr r1, _0809F150  @ =0x000017CE
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0809F154  @ =0x000016CC
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #84
	add r0, r4, r3
	strb r6, [r0]
	b _0809F3C4
	.byte 0x00
	.byte 0x00
_0809F140:
	.4byte 0x000017EA
_0809F144:
	.4byte 0x000017E1
_0809F148:
	.4byte 0x000009B2
_0809F14C:
	.4byte gFlippers
_0809F150:
	.4byte 0x000017CE
_0809F154:
	.4byte 0x000016CC
_0809F158:
	bl sub_0809DC3C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809F166
	b _0809F3C4
_0809F166:
	ldr r1, _0809F178  @ =gRam
	ldr r6, _0809F17C  @ =0x000009C6
	add r0, r1, r6
	ldrh r0, [r0]
	cmp r0, #7
	beq _0809F1CA
	ldr r2, _0809F180  @ =0x00001702
	add r0, r1, r2
	b _0809F1EC
_0809F178:
	.4byte gRam
_0809F17C:
	.4byte 0x000009C6
_0809F180:
	.4byte 0x00001702
_0809F184:
	ldr r3, _0809F1D4  @ =0x000009B2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0809F200
	ldr r1, _0809F1D8  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809F200
	ldr r2, _0809F1DC  @ =0x000017D0
	add r0, r4, r2
	ldrh r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809F200
	ldr r3, _0809F1E0  @ =0x000017E1
	add r0, r4, r3
	mov r6, r9
	strb r6, [r0]
	bl sub_0809DC3C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809F1C0
	b _0809F3C4
_0809F1C0:
	ldr r1, _0809F1E4  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #7
	bne _0809F1E8
_0809F1CA:
	mov r0, #61
	bl sub_0809E43C
	b _0809F3C4
	.byte 0x00
	.byte 0x00
_0809F1D4:
	.4byte 0x000009B2
_0809F1D8:
	.4byte 0x000017D4
_0809F1DC:
	.4byte 0x000017D0
_0809F1E0:
	.4byte 0x000017E1
_0809F1E4:
	.4byte 0x000009C6
_0809F1E8:
	ldr r2, _0809F1FC  @ =0x00001702
	add r0, r4, r2
_0809F1EC:
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F1F4
	b _0809F3C4
_0809F1F4:
	mov r0, #62
	bl sub_0809E43C
	b _0809F3C4
_0809F1FC:
	.4byte 0x00001702
_0809F200:
	ldr r4, _0809F220  @ =gRam
	ldr r3, _0809F224  @ =0x000017E1
	add r0, r4, r3
	mov r1, #0
	strb r1, [r0]
	ldr r6, _0809F228  @ =0x0000177C
	add r0, r4, r6
	ldrh r2, [r0]
	mov r1, #1
	and r1, r1, r2
	cmp r1, #0
	beq _0809F230
	ldr r0, _0809F22C  @ =0x0000177B
	add r1, r4, r0
	mov r0, #1
	b _0809F3C2
_0809F220:
	.4byte gRam
_0809F224:
	.4byte 0x000017E1
_0809F228:
	.4byte 0x0000177C
_0809F22C:
	.4byte 0x0000177B
_0809F230:
	ldr r3, _0809F298  @ =0x0000177B
	add r0, r4, r3
	strb r1, [r0]
	mov r0, #16
	and r0, r0, r2
	cmp r0, #0
	beq _0809F2C0
	ldr r6, _0809F29C  @ =0x00001805
	add r5, r4, r6
	strb r1, [r5]
	ldr r1, _0809F2A0  @ =0x00001710
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809F2C0
	bl sub_080A3DE4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0809F2C0
	ldr r2, _0809F2A4  @ =0x000017AA
	add r0, r4, r2
	ldrb r1, [r0]
	cmp r1, #0
	bne _0809F2C0
	ldr r3, _0809F2A8  @ =0x0000188E
	add r0, r4, r3
	strb r1, [r0]
	add r6, r6, #135
	add r0, r4, r6
	mov r2, #0
	strh r1, [r0]
	ldr r0, _0809F2AC  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F286
	ldr r1, _0809F2B0  @ =0x00001711
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _0809F2B4  @ =0x0000176C
	add r0, r4, r3
	strb r2, [r0]
_0809F286:
	ldr r1, _0809F2B8  @ =gUnknown_0816822C
	ldr r0, _0809F2BC  @ =gArmor
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	bl sub_08093078
	b _0809F3C4
_0809F298:
	.4byte 0x0000177B
_0809F29C:
	.4byte 0x00001805
_0809F2A0:
	.4byte 0x00001710
_0809F2A4:
	.4byte 0x000017AA
_0809F2A8:
	.4byte 0x0000188E
_0809F2AC:
	.4byte gMoonPearl
_0809F2B0:
	.4byte 0x00001711
_0809F2B4:
	.4byte 0x0000176C
_0809F2B8:
	.4byte gUnknown_0816822C
_0809F2BC:
	.4byte gArmor
_0809F2C0:
	ldr r3, _0809F2F4  @ =gRam
	ldr r6, _0809F2F8  @ =0x000017D8
	add r5, r3, r6
	ldrh r0, [r5]
	mov r4, #17
	and r4, r4, r0
	cmp r4, #0
	beq _0809F36C
	ldr r0, _0809F2FC  @ =0x000017DA
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0809F30C
	ldr r1, _0809F300  @ =0x0000172A
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F3A4
	ldr r2, _0809F304  @ =0x000017CE
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r6, _0809F308  @ =0x000016CC
	add r0, r3, r6
	strb r1, [r0]
	b _0809F3A4
	.byte 0x00
	.byte 0x00
_0809F2F4:
	.4byte gRam
_0809F2F8:
	.4byte 0x000017D8
_0809F2FC:
	.4byte 0x000017DA
_0809F300:
	.4byte 0x0000172A
_0809F304:
	.4byte 0x000017CE
_0809F308:
	.4byte 0x000016CC
_0809F30C:
	ldr r0, _0809F35C  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _0809F324
	ldr r6, _0809F360  @ =0x000017CA
	add r1, r3, r6
	mov r0, #192
	lsl r0, r0, #1
	strh r0, [r1]
_0809F324:
	ldrb r1, [r2]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0809F338
	ldr r0, _0809F360  @ =0x000017CA
	add r1, r3, r0
	mov r0, #192
	lsl r0, r0, #1
	strh r0, [r1]
_0809F338:
	mov r2, #1
	ldrh r1, [r5]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809F346
	mov r2, #2
_0809F346:
	strb r2, [r4]
	ldr r1, _0809F364  @ =0x000016CC
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _0809F368  @ =0x000017CE
	add r0, r3, r2
	strb r1, [r0]
	bl sub_0809E2CC
	b _0809F3A4
	.byte 0x00
	.byte 0x00
_0809F35C:
	.4byte 0x00001727
_0809F360:
	.4byte 0x000017CA
_0809F364:
	.4byte 0x000016CC
_0809F368:
	.4byte 0x000017CE
_0809F36C:
	ldr r6, _0809F380  @ =0x00001718
	add r0, r3, r6
	ldrb r0, [r0]
	cmp r0, #4
	bne _0809F388
	ldr r1, _0809F384  @ =0x000017DA
	add r0, r3, r1
	strb r4, [r0]
	b _0809F3A4
	.byte 0x00
	.byte 0x00
_0809F380:
	.4byte 0x00001718
_0809F384:
	.4byte 0x000017DA
_0809F388:
	ldr r2, _0809F3D4  @ =0x000017DA
	add r5, r3, r2
	ldrb r0, [r5]
	cmp r0, #0
	beq _0809F39E
	ldr r6, _0809F3D8  @ =0x000017CE
	add r0, r3, r6
	ldrb r1, [r0]
	ldr r2, _0809F3DC  @ =0x000016CC
	add r0, r3, r2
	strb r1, [r0]
_0809F39E:
	bl sub_0809E2CC
	strb r4, [r5]
_0809F3A4:
	ldr r2, _0809F3E0  @ =gRam
	ldr r3, _0809F3E4  @ =0x00001774
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _0809F3C4
	ldr r6, _0809F3E8  @ =0x000017AA
	add r1, r2, r6
	ldrb r0, [r1]
	cmp r0, #0
	bne _0809F3C4
	mov r0, #58
_0809F3C2:
	strb r0, [r1]
_0809F3C4:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809F3D4:
	.4byte 0x000017DA
_0809F3D8:
	.4byte 0x000017CE
_0809F3DC:
	.4byte 0x000016CC
_0809F3E0:
	.4byte gRam
_0809F3E4:
	.4byte 0x00001774
_0809F3E8:
	.4byte 0x000017AA
	THUMB_FUNC_END sub_0809EEB4

