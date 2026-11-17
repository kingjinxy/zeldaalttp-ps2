	THUMB_FUNC_START sub_08094DC0
sub_08094DC0: @ 0x08094DC0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r1, _08094DF8  @ =gRam
	ldr r2, _08094DFC  @ =0x000016D6
	add r0, r1, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	mov r8, r1
	cmp r3, #0
	bne _08094DE0
	bl _08095786
_08094DE0:
	ldr r0, _08094E00  @ =0x0000172C
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #1
	bne _08094E04
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	b _08094E06
	.byte 0x00
	.byte 0x00
_08094DF8:
	.4byte gRam
_08094DFC:
	.4byte 0x000016D6
_08094E00:
	.4byte 0x0000172C
_08094E04:
	mvn r0, r3
_08094E06:
	asr r4, r0, #31
	mov r0, #2
	and r4, r4, r0
	lsr r1, r4, #1
	ldr r0, _08094E30  @ =0x00001726
	add r0, r0, r8
	strb r1, [r0]
	add r0, r4, #0
	bl sub_0809EA40
	ldr r0, _08094E34  @ =0x000009B2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08094E38
	bl sub_08094538
	bl _08095786
_08094E30:
	.4byte 0x00001726
_08094E34:
	.4byte 0x000009B2
_08094E38:
	ldr r0, _08094E60  @ =0x00001791
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08094E50
	ldr r0, _08094E64  @ =0x000016F8
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094E6C
_08094E50:
	ldr r2, _08094E68  @ =0x0000097C
	add r2, r2, r8
	ldrb r1, [r2]
	lsl r0, r1, #24
	asr r0, r0, #28
	orr r0, r0, r1
	strb r0, [r2]
	b _08095058
_08094E60:
	.4byte 0x00001791
_08094E64:
	.4byte 0x000016F8
_08094E68:
	.4byte 0x0000097C
_08094E6C:
	ldr r0, _08094ED0  @ =0x0000172C
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #2
	bne _08094F24
	ldr r0, _08094ED4  @ =0x0000172A
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08094EE0
	ldr r0, _08094ED8  @ =0x00000B14
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #3
	bne _08094E98
	mov r0, #161
	lsl r0, r0, #4
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094E98
	b _0809509E
_08094E98:
	ldr r2, _08094EDC  @ =0x000016D6
	add r2, r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _08094EB6
	ldrb r1, [r2]
	mov r3, #255
	lsl r3, r3, #8
	add r0, r3, #0
	orr r1, r1, r0
_08094EB6:
	neg r0, r1
	lsl r0, r0, #16
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r8
	lsr r0, r0, #16
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	bl sub_08094C90
	bl _08095786
_08094ED0:
	.4byte 0x0000172C
_08094ED4:
	.4byte 0x0000172A
_08094ED8:
	.4byte 0x00000B14
_08094EDC:
	.4byte 0x000016D6
_08094EE0:
	ldr r0, _08094F1C  @ =0x00001721
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08094F24
	ldr r2, _08094F20  @ =0x000016D6
	add r2, r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _08094F08
	ldrb r1, [r2]
	mov r3, #255
	lsl r3, r3, #8
	add r0, r3, #0
	orr r1, r1, r0
_08094F08:
	neg r0, r1
	lsl r0, r0, #16
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r8
	lsr r0, r0, #16
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	b _08095070
_08094F1C:
	.4byte 0x00001721
_08094F20:
	.4byte 0x000016D6
_08094F24:
	ldr r2, _08094F98  @ =gRam
	ldr r3, _08094F9C  @ =0x0000097C
	add r6, r2, r3
	ldrb r1, [r6]
	mov r3, #112
	add r0, r3, #0
	and r0, r0, r1
	mov r8, r2
	cmp r0, #0
	bne _08094F3A
	b _08095058
_08094F3A:
	ldr r0, _08094FA0  @ =0x00000969
	add r0, r0, r8
	mov r2, #0
	strb r2, [r0]
	ldr r0, _08094FA4  @ =0x0000097D
	add r0, r0, r8
	ldrb r1, [r0]
	mov r5, #7
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08094F6C
	ldr r0, _08094FA8  @ =0x000016D6
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mvn r0, r0
	lsr r4, r0, #31
	ldr r0, _08094FAC  @ =gUnknown_08167D4E
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _08094FB0  @ =0x000016FC
	add r0, r0, r8
	strh r1, [r0]
_08094F6C:
	ldr r7, _08094FB4  @ =0x0000172C
	add r7, r7, r8
	mov r0, #1
	strb r0, [r7]
	ldr r0, _08094FB8  @ =0x0000188A
	add r0, r0, r8
	strb r2, [r0]
	ldrb r1, [r6]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #112
	beq _08095016
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	bne _08094FBC
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _08095016
	b _08095058
	.byte 0x00
	.byte 0x00
_08094F98:
	.4byte gRam
_08094F9C:
	.4byte 0x0000097C
_08094FA0:
	.4byte 0x00000969
_08094FA4:
	.4byte 0x0000097D
_08094FA8:
	.4byte 0x000016D6
_08094FAC:
	.4byte gUnknown_08167D4E
_08094FB0:
	.4byte 0x000016FC
_08094FB4:
	.4byte 0x0000172C
_08094FB8:
	.4byte 0x0000188A
_08094FBC:
	ldr r0, _08095038  @ =0x0000172B
	add r0, r0, r8
	strb r2, [r0]
	ldr r0, _0809503C  @ =0x00001708
	add r0, r0, r8
	ldrb r0, [r0]
	add r1, r5, #0
	and r1, r1, r0
	ldr r0, _08095040  @ =0x000016D6
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08094FDE
	ldr r0, _08095044  @ =0x0000FFF8
	orr r1, r1, r0
_08094FDE:
	neg r0, r1
	lsl r0, r0, #16
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r8
	lsr r0, r0, #16
	ldrh r2, [r1]
	add r0, r0, r2
	mov r4, #0
	strh r0, [r1]
	bl sub_08094C1C
	strb r4, [r7]
	ldrb r1, [r6]
	mov r0, #33
	and r0, r0, r1
	cmp r0, #32
	bne _08095016
	ldr r1, _08095048  @ =0x000016C4
	add r1, r1, r8
	ldrb r3, [r1]
	add r0, r5, #0
	and r0, r0, r3
	cmp r0, #1
	bne _08095016
	mov r0, #248
	and r0, r0, r3
	strb r0, [r1]
_08095016:
	ldr r2, _0809504C  @ =gRam
	ldr r3, _08095050  @ =0x0000179F
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08095028
	b _08095786
_08095028:
	ldr r0, _08095054  @ =0x00001705
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
	b _08095786
	.byte 0x00
	.byte 0x00
_08095038:
	.4byte 0x0000172B
_0809503C:
	.4byte 0x00001708
_08095040:
	.4byte 0x000016D6
_08095044:
	.4byte 0x0000FFF8
_08095048:
	.4byte 0x000016C4
_0809504C:
	.4byte gRam
_08095050:
	.4byte 0x0000179F
_08095054:
	.4byte 0x00001705
_08095058:
	ldr r0, _08095134  @ =0x0000179F
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _0809509E
	ldr r0, _08095138  @ =0x0000172C
	add r0, r0, r8
	strb r3, [r0]
_08095070:
	ldr r4, _0809513C  @ =gRam
	ldr r1, _08095134  @ =0x0000179F
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _0809509E
	ldr r0, _08095140  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08095144  @ =0x000016FC
	add r0, r4, r1
	mov r1, #0
	strh r3, [r0]
	ldr r2, _08095148  @ =0x00000A11
	add r0, r4, r2
	strb r1, [r0]
_0809509E:
	ldr r4, _0809513C  @ =gRam
	ldr r3, _0809514C  @ =0x0000097C
	add r0, r4, r3
	ldrb r0, [r0]
	mov r2, #7
	and r2, r2, r0
	cmp r2, #0
	bne _080950D6
	ldr r1, _08095150  @ =0x00000978
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080950D6
	ldr r3, _08095154  @ =0x0000188A
	add r0, r4, r3
	strb r2, [r0]
	bl sub_08093B68
	ldr r1, _08095158  @ =0x0000172B
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080950D6
	b _08095786
_080950D6:
	ldr r7, _0809513C  @ =gRam
	ldr r2, _08095158  @ =0x0000172B
	add r0, r7, r2
	mov r3, #0
	mov r10, r3
	mov r1, #0
	mov r8, r1
	mov r2, r8
	strb r2, [r0]
	ldr r3, _0809515C  @ =0x00001774
	add r3, r3, r7
	mov r9, r3
	ldrh r1, [r3]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0809510E
	ldr r0, _0809514C  @ =0x0000097C
	add r5, r7, r0
	ldrh r6, [r5]
	ldr r1, _08095160  @ =0x00001778
	add r4, r7, r1
	ldrh r0, [r4]
	bl sub_08084008
	mov r2, r8
	strh r2, [r4]
	strh r6, [r5]
_0809510E:
	mov r3, #161
	lsl r3, r3, #4
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809519C
	ldr r1, _08095164  @ =0x000017DC
	add r0, r7, r1
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0809516C
	ldr r2, _08095168  @ =0x000017AE
	add r0, r7, r2
	ldrb r1, [r0]
	mov r2, #1
	b _080951B2
	.byte 0x00
	.byte 0x00
_08095134:
	.4byte 0x0000179F
_08095138:
	.4byte 0x0000172C
_0809513C:
	.4byte gRam
_08095140:
	.4byte 0x00001705
_08095144:
	.4byte 0x000016FC
_08095148:
	.4byte 0x00000A11
_0809514C:
	.4byte 0x0000097C
_08095150:
	.4byte 0x00000978
_08095154:
	.4byte 0x0000188A
_08095158:
	.4byte 0x0000172B
_0809515C:
	.4byte 0x00001774
_08095160:
	.4byte 0x00001778
_08095164:
	.4byte 0x000017DC
_08095168:
	.4byte 0x000017AE
_0809516C:
	mov r3, r9
	ldrh r0, [r3]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080951CC
	ldr r1, _08095194  @ =0x0000097C
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080951CC
	ldr r3, _08095198  @ =0x000017AE
	add r2, r7, r3
	ldrb r1, [r2]
	mov r0, #254
	b _080951C8
	.byte 0x00
	.byte 0x00
_08095194:
	.4byte 0x0000097C
_08095198:
	.4byte 0x000017AE
_0809519C:
	ldr r1, _080951B8  @ =0x000017AC
	add r0, r7, r1
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080951C0
	ldr r2, _080951BC  @ =0x000017AE
	add r0, r7, r2
	ldrb r1, [r0]
	mov r2, #2
_080951B2:
	orr r1, r1, r2
	strb r1, [r0]
	b _080951CC
_080951B8:
	.4byte 0x000017AC
_080951BC:
	.4byte 0x000017AE
_080951C0:
	ldr r3, _080951F8  @ =0x000017AE
	add r2, r7, r3
	ldrb r1, [r2]
	mov r0, #253
_080951C8:
	and r0, r0, r1
	strb r0, [r2]
_080951CC:
	ldr r3, _080951FC  @ =gRam
	ldr r1, _08095200  @ =0x00001784
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r2, r0, #8
	mov r1, #34
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809525A
	mov r0, #32
	and r2, r2, r0
	lsl r0, r2, #16
	lsr r2, r0, #16
	cmp r2, #0
	beq _08095204
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	mov r0, #8
	strh r0, [r1]
	b _0809520C
_080951F8:
	.4byte 0x000017AE
_080951FC:
	.4byte gRam
_08095200:
	.4byte 0x00001784
_08095204:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strh r2, [r0]
_0809520C:
	mov r0, #5
	bl sub_080AA83C
	ldr r2, _08095280  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldr r1, _08095284  @ =gUnknown_08167D52
	add r0, r0, #102
	add r4, r2, r0
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, #150
	lsl r1, r1, #4
	add r3, r2, r1
	ldrh r1, [r3]
	sub r0, r0, r1
	strh r0, [r3]
	ldr r0, _08095288  @ =0x000016C4
	add r3, r2, r0
	ldr r1, _0809528C  @ =gUnknown_08167D5A
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r1, _08095290  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	bl sub_08087F84
	mov r0, #116
	bl sub_0809E49C
_0809525A:
	mov r4, #1
	ldr r3, _08095280  @ =gRam
	ldr r2, _08095294  @ =0x00001888
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #34
	and r0, r0, r1
	cmp r0, #0
	beq _0809529C
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08095276
	mov r4, #2
_08095276:
	ldr r1, _08095298  @ =0x0000188A
	add r0, r3, r1
	strb r4, [r0]
	b _080952EC
	.byte 0x00
	.byte 0x00
_08095280:
	.4byte gRam
_08095284:
	.4byte gUnknown_08167D52
_08095288:
	.4byte 0x000016C4
_0809528C:
	.4byte gUnknown_08167D5A
_08095290:
	.4byte 0x00000964
_08095294:
	.4byte 0x00001888
_08095298:
	.4byte 0x0000188A
_0809529C:
	mov r4, #3
	lsl r0, r1, #16
	lsr r2, r0, #24
	add r0, r2, #0
	mov r1, #34
	and r0, r0, r1
	cmp r0, #0
	beq _080952C4
	mov r0, #32
	and r2, r2, r0
	cmp r2, #0
	beq _080952B6
	mov r4, #4
_080952B6:
	ldr r2, _080952C0  @ =0x0000188A
	add r0, r3, r2
	strb r4, [r0]
	b _080952EC
	.byte 0x00
	.byte 0x00
_080952C0:
	.4byte 0x0000188A
_080952C4:
	ldr r1, _0809532C  @ =0x00001774
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080952EC
	ldr r2, _08095330  @ =0x0000097C
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	bne _080952EC
	ldr r2, _08095334  @ =0x0000188A
	add r0, r3, r2
	strb r1, [r0]
_080952EC:
	ldr r4, _08095338  @ =gRam
	ldr r3, _0809533C  @ =0x000017FF
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _0809534C
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809534C
	bl sub_08093078
	ldr r0, _08095340  @ =0x00000B22
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _08095344  @ =0x0000180D
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r3, _08095348  @ =0x00001702
	add r1, r4, r3
	mov r0, #2
	strb r0, [r1]
	mov r0, #4
	bl sub_0809E43C
	b _080953D0
_0809532C:
	.4byte 0x00001774
_08095330:
	.4byte 0x0000097C
_08095334:
	.4byte 0x0000188A
_08095338:
	.4byte gRam
_0809533C:
	.4byte 0x000017FF
_08095340:
	.4byte 0x00000B22
_08095344:
	.4byte 0x0000180D
_08095348:
	.4byte 0x00001702
_0809534C:
	ldr r5, _0809537C  @ =gRam
	ldr r1, _08095380  @ =0x000017D0
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080953F8
	ldr r2, _08095384  @ =0x000017D4
	add r6, r5, r2
	ldrb r4, [r6]
	cmp r4, #0
	bne _080953F8
	bl sub_08093078
	ldr r3, _08095388  @ =0x000009B5
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809538C
	bl sub_0808B1A8
	b _080953D0
	.byte 0x00
	.byte 0x00
_0809537C:
	.4byte gRam
_08095380:
	.4byte 0x000017D0
_08095384:
	.4byte 0x000017D4
_08095388:
	.4byte 0x000009B5
_0809538C:
	mov r0, #1
	strb r0, [r6]
	ldr r1, _080953E0  @ =0x000016CC
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080953E4  @ =0x000017CE
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080953E8  @ =0x00001791
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _080953EC  @ =0x00001792
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #58
	add r0, r5, r2
	strb r4, [r0]
	sub r3, r3, #120
	add r0, r5, r3
	strb r4, [r0]
	sub r1, r1, #66
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #41
	add r0, r5, r2
	strb r4, [r0]
	add r3, r3, #157
	add r0, r5, r3
	strb r4, [r0]
	bl sub_08092B0C
	mov r0, #4
	bl sub_0809E43C
_080953D0:
	ldr r0, _080953F0  @ =gRam
	ldr r1, _080953F4  @ =0x0000180D
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl sub_0809A24C
	b _08095480
_080953E0:
	.4byte 0x000016CC
_080953E4:
	.4byte 0x000017CE
_080953E8:
	.4byte 0x00001791
_080953EC:
	.4byte 0x00001792
_080953F0:
	.4byte gRam
_080953F4:
	.4byte 0x0000180D
_080953F8:
	ldr r5, _08095424  @ =gRam
	ldr r2, _08095428  @ =0x000017D2
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08095480
	ldr r3, _0809542C  @ =0x000017D4
	add r6, r5, r3
	ldrb r0, [r6]
	cmp r0, #0
	beq _08095480
	ldr r1, _08095430  @ =0x00001702
	add r0, r5, r1
	ldrb r4, [r0]
	cmp r4, #0
	beq _08095438
	ldr r2, _08095434  @ =0x0000097C
	add r1, r5, r2
	b _08095460
	.byte 0x00
	.byte 0x00
_08095424:
	.4byte gRam
_08095428:
	.4byte 0x000017D2
_0809542C:
	.4byte 0x000017D4
_08095430:
	.4byte 0x00001702
_08095434:
	.4byte 0x0000097C
_08095438:
	bl sub_08093078
	strb r4, [r6]
	ldr r3, _08095468  @ =0x000017CE
	add r0, r5, r3
	ldrb r1, [r0]
	ldr r2, _0809546C  @ =0x000016CC
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08095474
	mov r0, #1
	strb r0, [r6]
	ldr r3, _08095470  @ =0x0000097C
	add r1, r5, r3
_08095460:
	mov r0, #7
	strb r0, [r1]
	b _08095480
	.byte 0x00
	.byte 0x00
_08095468:
	.4byte 0x000017CE
_0809546C:
	.4byte 0x000016CC
_08095470:
	.4byte 0x0000097C
_08095474:
	ldr r0, _080954A8  @ =0x0000180D
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	bl sub_0809A24C
_08095480:
	ldr r0, _080954AC  @ =gRam
	ldr r2, _080954B0  @ =0x00001713
	add r1, r0, r2
	ldrb r1, [r1]
	mov r3, #7
	and r3, r3, r1
	add r2, r3, #0
	mov r8, r0
	cmp r2, #7
	bne _08095528
	ldr r0, _080954B4  @ =0x000016F8
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080954BC
	ldr r0, _080954B8  @ =0x0000097C
	add r0, r0, r8
	strb r3, [r0]
	b _08095782
	.byte 0x00
	.byte 0x00
_080954A8:
	.4byte 0x0000180D
_080954AC:
	.4byte gRam
_080954B0:
	.4byte 0x00001713
_080954B4:
	.4byte 0x000016F8
_080954B8:
	.4byte 0x0000097C
_080954BC:
	ldr r0, _0809550C  @ =0x00001745
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #119
	and r0, r0, r1
	cmp r0, #0
	beq _080954E6
	mov r4, #8
	mov r0, #112
	and r0, r0, r1
	cmp r0, #0
	beq _080954D6
	mov r4, #17
_080954D6:
	ldr r0, _08095510  @ =0x000009AD
	add r0, r0, r8
	strb r4, [r0]
	ldr r0, _08095514  @ =0x000009AC
	add r0, r0, r8
	strb r2, [r0]
	bl sub_08093078
_080954E6:
	ldr r2, _08095518  @ =gRam
	ldr r3, _0809551C  @ =0x00001726
	add r0, r2, r3
	ldrb r1, [r0]
	mov r3, #2
	add r0, r3, #0
	and r0, r0, r1
	mov r8, r2
	cmp r0, #0
	bne _08095528
	ldr r0, _08095520  @ =0x00001719
	add r0, r0, r8
	strb r3, [r0]
	ldr r1, _08095524  @ =0x00001712
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	b _08095786
	.byte 0x00
	.byte 0x00
_0809550C:
	.4byte 0x00001745
_08095510:
	.4byte 0x000009AD
_08095514:
	.4byte 0x000009AC
_08095518:
	.4byte gRam
_0809551C:
	.4byte 0x00001726
_08095520:
	.4byte 0x00001719
_08095524:
	.4byte 0x00001712
_08095528:
	ldr r2, _080955A8  @ =0x00001719
	add r2, r2, r8
	ldrb r0, [r2]
	cmp r0, #2
	bne _0809554C
	mov r0, #16
	mov r1, sp
	strb r0, [r1]
	ldr r0, _080955AC  @ =0x00001804
	add r0, r0, r8
	ldrb r1, [r0]
	cmp r1, #0
	bne _08095546
	mov r0, sp
	strb r1, [r0]
_08095546:
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
_0809554C:
	ldr r1, _080955B0  @ =0x00001712
	add r1, r1, r8
	ldrb r0, [r1]
	cmp r0, #1
	bne _0809555A
	mov r0, #2
	strb r0, [r1]
_0809555A:
	ldr r0, _080955B4  @ =0x00001714
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080955CC
	ldr r0, _080955B8  @ =0x0000097C
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080955CC
	ldr r3, _080955BC  @ =0x00001718
	add r3, r3, r8
	ldrb r0, [r3]
	cmp r0, #5
	bne _08095586
	b _08095786
_08095586:
	cmp r0, #2
	bne _0809558C
	b _08095786
_0809558C:
	ldr r1, _080955C0  @ =0x00001717
	add r1, r1, r8
	mov r0, #9
	strb r0, [r1]
	ldr r0, _080955C4  @ =0x00001715
	add r0, r0, r8
	strb r2, [r0]
	ldr r1, _080955C8  @ =0x00001716
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	strb r0, [r3]
	b _08095786
	.byte 0x00
	.byte 0x00
_080955A8:
	.4byte 0x00001719
_080955AC:
	.4byte 0x00001804
_080955B0:
	.4byte 0x00001712
_080955B4:
	.4byte 0x00001714
_080955B8:
	.4byte 0x0000097C
_080955BC:
	.4byte 0x00001718
_080955C0:
	.4byte 0x00001717
_080955C4:
	.4byte 0x00001715
_080955C8:
	.4byte 0x00001716
_080955CC:
	ldr r1, _0809561C  @ =0x00001715
	add r1, r1, r8
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08095620  @ =0x00001774
	add r0, r0, r8
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08095692
	ldr r0, _08095624  @ =0x000016F8
	add r0, r0, r8
	ldr r1, _08095628  @ =0x000017AA
	add r1, r1, r8
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _0809562C  @ =0x00001710
	add r1, r1, r8
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _0809567C
	ldr r0, _08095630  @ =0x00001726
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095634
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _08095692
	b _08095644
	.byte 0x00
	.byte 0x00
_0809561C:
	.4byte 0x00001715
_08095620:
	.4byte 0x00001774
_08095624:
	.4byte 0x000016F8
_08095628:
	.4byte 0x000017AA
_0809562C:
	.4byte 0x00001710
_08095630:
	.4byte 0x00001726
_08095634:
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08095692
_08095644:
	ldr r0, _08095798  @ =0x000017AA
	add r0, r0, r8
	ldrb r3, [r0]
	cmp r3, #0
	bne _08095692
	ldr r1, _0809579C  @ =gUnknown_08167D62
	ldr r0, _080957A0  @ =gArmor
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r0, _080957A4  @ =0x00001805
	add r0, r0, r8
	strb r1, [r0]
	ldr r1, _080957A8  @ =0x0000176E
	add r1, r1, r8
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080957AC  @ =0x0000180D
	add r0, r0, r8
	strb r3, [r0]
	ldr r0, _080957B0  @ =0x00001710
	add r0, r0, r8
	strb r3, [r0]
	ldr r0, _080957B4  @ =0x000017F1
	add r0, r0, r8
	strb r3, [r0]
	bl sub_08099324
_0809567C:
	ldr r2, _080957B8  @ =gRam
	ldr r1, _080957BC  @ =0x00001774
	add r0, r2, r1
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r1, #7
	and r0, r0, r1
	ldr r3, _080957C0  @ =0x0000097C
	add r1, r2, r3
	strb r0, [r1]
	mov r8, r2
_08095692:
	ldr r0, _080957C4  @ =0x00000B14
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #0
	beq _080956AC
	cmp r0, #4
	beq _080956AC
	mov r0, #161
	lsl r0, r0, #4
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095782
_080956AC:
	ldr r2, _080957C8  @ =0x0000171C
	add r2, r2, r8
	ldrb r0, [r2]
	ldr r1, _080957CC  @ =0x0000171D
	add r1, r1, r8
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	cmp r0, #0
	beq _08095776
	ldr r0, _080957D0  @ =0x0000172A
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095776
	ldrh r1, [r2]
	ldr r0, _080957D4  @ =0x00001747
	add r0, r0, r8
	strb r1, [r0]
	mov r1, #185
	lsl r1, r1, #5
	add r1, r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08095782
	mov r4, #15
	ldrh r7, [r2]
	mov r6, sp
	ldr r0, _080957D8  @ =0x00001726
	add r8, r8, r0
_080956F0:
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08095768
	mov r0, sp
	add r1, r4, #0
	bl sub_080B0184
	lsl r0, r0, #24
	cmp r0, #0
	bne _08095768
	ldr r5, _080957B8  @ =gRam
	ldrb r1, [r6]
	ldr r3, _080957C0  @ =0x0000097C
	add r0, r5, r3
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080AF654
	lsl r0, r0, #24
	cmp r0, #0
	bne _08095768
	ldrb r0, [r6]
	bl sub_080AFF7C
	ldr r0, _080957DC  @ =0x00001A48
	add r1, r5, r0
	ldrb r2, [r6]
	add r1, r1, r2
	mov r3, r8
	ldrb r0, [r3]
	lsl r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r3]
	lsl r0, r0, #1
	ldr r2, _080957E0  @ =0x00000B1C
	add r1, r5, r2
	strh r0, [r1]
	ldrb r3, [r6]
	ldr r1, _080957E4  @ =0x00001A44
	add r0, r5, r1
	add r0, r3, r0
	ldrb r2, [r0]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #1
	bne _0809575A
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809575A:
	mov r0, #210
	lsl r0, r0, #5
	add r1, r5, r0
	add r1, r3, r1
	mov r0, #15
	and r2, r2, r0
	strb r2, [r1]
_08095768:
	sub r1, r4, #1
	lsl r1, r1, #24
	lsl r0, r7, #17
	lsr r7, r0, #16
	lsr r4, r1, #24
	cmp r1, #0
	bge _080956F0
_08095776:
	ldr r0, _080957B8  @ =gRam
	mov r1, #185
	lsl r1, r1, #5
	add r0, r0, r1
	mov r1, #21
	strb r1, [r0]
_08095782:
	bl sub_080957E8
_08095786:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08095798:
	.4byte 0x000017AA
_0809579C:
	.4byte gUnknown_08167D62
_080957A0:
	.4byte gArmor
_080957A4:
	.4byte 0x00001805
_080957A8:
	.4byte 0x0000176E
_080957AC:
	.4byte 0x0000180D
_080957B0:
	.4byte 0x00001710
_080957B4:
	.4byte 0x000017F1
_080957B8:
	.4byte gRam
_080957BC:
	.4byte 0x00001774
_080957C0:
	.4byte 0x0000097C
_080957C4:
	.4byte 0x00000B14
_080957C8:
	.4byte 0x0000171C
_080957CC:
	.4byte 0x0000171D
_080957D0:
	.4byte 0x0000172A
_080957D4:
	.4byte 0x00001747
_080957D8:
	.4byte 0x00001726
_080957DC:
	.4byte 0x00001A48
_080957E0:
	.4byte 0x00000B1C
_080957E4:
	.4byte 0x00001A44
	THUMB_FUNC_END sub_08094DC0

