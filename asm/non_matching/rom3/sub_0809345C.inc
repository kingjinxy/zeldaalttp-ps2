	THUMB_FUNC_START sub_0809345C
sub_0809345C: @ 0x0809345C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080935A8  @ =gRam
	ldr r2, _080935AC  @ =0x000016C1
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080935B0  @ =0x000016D9
	add r0, r1, r3
	strb r2, [r0]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r1, r4
	ldrb r2, [r0]
	ldr r5, _080935B4  @ =0x000016D8
	add r0, r1, r5
	strb r2, [r0]
	add r3, r3, #19
	add r0, r1, r3
	ldrb r0, [r0]
	sub r2, r2, r0
	add r4, r4, #22
	add r0, r1, r4
	strb r2, [r0]
	add r5, r1, #0
	ldr r0, _080935B8  @ =gUnknown_08167CE0
	mov r10, r0
_08093496:
	ldr r1, _080935BC  @ =0x000016CE
	add r7, r5, r1
	mov r4, #0
	ldrsb r4, [r7, r4]
	mvn r4, r4
	asr r4, r4, #31
	mov r2, #2
	mov r8, r2
	and r4, r4, r2
	lsr r4, r4, #1
	lsl r1, r4, #1
	add r1, r1, r10
	ldr r3, _080935C0  @ =0x000016C4
	add r2, r5, r3
	ldrh r0, [r2]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _080935C4  @ =0x00001726
	add r0, r0, r5
	mov r9, r0
	ldrb r2, [r0]
	lsl r2, r2, #25
	lsr r0, r2, #24
	ldr r1, _080935C8  @ =gUnknown_08167CE4
	add r2, r0, #0
	add r2, r2, r1
	mov r1, #182
	lsl r1, r1, #5
	add r6, r5, r1
	ldrh r1, [r6]
	ldrh r2, [r2]
	add r1, r1, r2
	strh r1, [r6]
	bl sub_0809EA40
	ldr r0, _080935CC  @ =gUnknown_08167CEC
	add r4, r4, r0
	ldrb r2, [r4]
	ldr r4, _080935D0  @ =0x00001732
	add r3, r5, r4
	strb r2, [r3]
	ldr r1, _080935D4  @ =0x000017D2
	add r0, r5, r1
	ldrb r0, [r0]
	add r4, r4, #186
	add r1, r5, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r4, r4, #4
	add r1, r5, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _080935D8  @ =gUnknown_03003A00
	ldrb r1, [r4]
	orr r0, r0, r1
	and r0, r0, r2
	cmp r0, r2
	bne _08093496
	ldr r1, _080935DC  @ =0x000017D0
	add r0, r5, r1
	ldrh r0, [r0]
	ldrb r1, [r3]
	and r0, r0, r1
	cmp r0, #0
	beq _0809355A
	ldr r2, _080935E0  @ =0x000017D4
	add r1, r5, r2
	mov r4, #0
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080935E4  @ =0x00001702
	add r0, r5, r3
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080935E8  @ =0x000016CC
	add r0, r5, r2
	ldrb r1, [r0]
	add r3, r3, #204
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _080935EC  @ =0x00001750
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _080935F0  @ =0x000017DF
	add r0, r5, r2
	strb r4, [r0]
	sub r3, r3, #24
	add r0, r5, r3
	strb r4, [r0]
	bl sub_08092B0C
	ldr r1, _080935F4  @ =0x00001719
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _080935F8  @ =0x00001808
	add r0, r5, r2
	strb r4, [r0]
_0809355A:
	ldr r1, _080935FC  @ =gUnknown_08167CE8
	mov r3, r9
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r6]
	ldrh r0, [r0]
	add r1, r1, r0
	mov r4, #0
	strh r1, [r6]
	strh r1, [r7, #30]
	add r2, r7, #0
	add r2, r2, #42
	mov r0, #1
	strb r0, [r2]
	sub r3, r7, #6
	ldrb r0, [r3]
	ldr r5, _08093600  @ =0xFFFFF292
	add r2, r7, r5
	strb r0, [r2]
	add r5, r5, #1
	add r0, r7, r5
	strb r4, [r0]
	ldrh r0, [r7, #10]
	sub r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	mov r2, #148
	lsl r2, r2, #1
	add r0, r7, r2
	strh r1, [r0]
	strh r1, [r3]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080935A8:
	.4byte gRam
_080935AC:
	.4byte 0x000016C1
_080935B0:
	.4byte 0x000016D9
_080935B4:
	.4byte 0x000016D8
_080935B8:
	.4byte gUnknown_08167CE0
_080935BC:
	.4byte 0x000016CE
_080935C0:
	.4byte 0x000016C4
_080935C4:
	.4byte 0x00001726
_080935C8:
	.4byte gUnknown_08167CE4
_080935CC:
	.4byte gUnknown_08167CEC
_080935D0:
	.4byte 0x00001732
_080935D4:
	.4byte 0x000017D2
_080935D8:
	.4byte gUnknown_03003A00
_080935DC:
	.4byte 0x000017D0
_080935E0:
	.4byte 0x000017D4
_080935E4:
	.4byte 0x00001702
_080935E8:
	.4byte 0x000016CC
_080935EC:
	.4byte 0x00001750
_080935F0:
	.4byte 0x000017DF
_080935F4:
	.4byte 0x00001719
_080935F8:
	.4byte 0x00001808
_080935FC:
	.4byte gUnknown_08167CE8
_08093600:
	.4byte 0xFFFFF292
	THUMB_FUNC_END sub_0809345C

