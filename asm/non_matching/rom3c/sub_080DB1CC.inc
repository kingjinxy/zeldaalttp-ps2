	THUMB_FUNC_START sub_080DB1CC
sub_080DB1CC: @ 0x080DB1CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r4, sp
	add r4, r4, #5
	add r0, sp, #4
	add r1, r4, #0
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DB1F4
	b _080DB3F0
_080DB1F4:
	ldr r0, _080DB304  @ =gRam
	ldr r2, _080DB308  @ =0x00000F92
	add r1, r0, r2
	add r1, r1, r8
	ldrb r1, [r1]
	lsl r1, r1, #26
	lsr r1, r1, #24
	mov r10, r1
	mov r7, #3
	add r6, sp, #4
	mov r9, r0
_080DB20A:
	mov r4, r10
	add r0, r4, r7
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	mov r0, #2
	mov r12, r0
	add r0, r5, #0
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _080DB228
	mov r1, #0
	mov r12, r1
_080DB228:
	ldr r0, _080DB30C  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080DB310  @ =gUnknown_08175C66
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080DB314  @ =0x00000964
	add r3, r3, r9
	ldr r2, _080DB318  @ =gUnknown_08175CAE
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080DB31C  @ =gUnknown_08175CF6
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080DB320  @ =gUnknown_08175D3E
	add r4, r5, r4
	ldrb r4, [r4]
	ldr r5, _080DB324  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, r12
	str r4, [sp]
	bl sub_080C6004
	lsl r1, r7, #24
	mov r5, #255
	lsl r5, r5, #24
	add r1, r1, r5
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r7, r1, #24
	cmp r1, #0
	bge _080DB20A
	mov r4, r9
	ldr r1, _080DB328  @ =0x00001122
	add r0, r4, r1
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080DB2B4
	mov r0, #4
	bl sub_080C64A0
_080DB2B4:
	ldr r2, _080DB308  @ =0x00000F92
	add r0, r4, r2
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #11
	bhi _080DB2C8
	mov r0, r8
	mov r1, #18
	bl sub_080C57F8
_080DB2C8:
	ldr r5, _080DB32C  @ =0x000009AD
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB2DC
	mov r0, r8
	mov r1, #255
	mov r2, #3
	bl sub_080C6350
_080DB2DC:
	add r0, sp, #4
	mov r1, sp
	add r1, r1, #5
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DB2F0
	b _080DB3F0
_080DB2F0:
	ldr r0, _080DB330  @ =0x00000FB2
	add r0, r0, r9
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DB334
	mov r0, #8
	bl sub_080CF388
	b _080DB33A
_080DB304:
	.4byte gRam
_080DB308:
	.4byte 0x00000F92
_080DB30C:
	.4byte gUnknown_03003E74
_080DB310:
	.4byte gUnknown_08175C66
_080DB314:
	.4byte 0x00000964
_080DB318:
	.4byte gUnknown_08175CAE
_080DB31C:
	.4byte gUnknown_08175CF6
_080DB320:
	.4byte gUnknown_08175D3E
_080DB324:
	.4byte gUnknown_03002B99
_080DB328:
	.4byte 0x00001122
_080DB32C:
	.4byte 0x000009AD
_080DB330:
	.4byte 0x00000FB2
_080DB334:
	mov r0, #8
	bl sub_080CF3A0
_080DB33A:
	ldr r3, _080DB400  @ =gRam
	ldr r1, _080DB404  @ =0x00001082
	add r0, r3, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DB3F0
	sub r0, r0, #1
	lsl r0, r0, #25
	lsr r0, r0, #24
	mov r10, r0
	ldr r2, _080DB408  @ =0x00000996
	add r0, r3, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #2
	and r0, r0, r1
	add r0, r0, #2
	mov r1, #49
	ldr r4, _080DB40C  @ =0x00000979
	add r2, r3, r4
	orr r0, r0, r1
	strb r0, [r2]
	mov r7, #1
	add r6, sp, #4
	mov r9, r3
_080DB36E:
	mov r5, r10
	add r3, r5, r7
	lsl r3, r3, #24
	lsr r3, r3, #24
	ldr r0, _080DB410  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080DB414  @ =gUnknown_08175D86
	add r1, r3, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080DB418  @ =0x00000964
	add r4, r4, r9
	ldr r2, _080DB41C  @ =gUnknown_08175DCE
	add r3, r3, r2
	mov r2, #0
	ldrsb r2, [r3, r2]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080DB404  @ =0x00001082
	add r3, r3, r9
	add r3, r3, r8
	ldrb r5, [r3]
	sub r5, r5, #1
	ldr r4, _080DB420  @ =gUnknown_08175E16
	add r3, r5, r4
	ldrb r3, [r3]
	ldr r4, _080DB424  @ =gUnknown_03002BA9
	ldrb r4, [r4]
	lsl r4, r4, #24
	asr r4, r4, #24
	lsl r4, r4, #8
	mov r12, r4
	add r3, r3, r12
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080DB428  @ =gUnknown_08175E3A
	add r5, r5, r4
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6004
	lsl r1, r7, #24
	mov r5, #255
	lsl r5, r5, #24
	add r1, r1, r5
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r7, r1, #24
	cmp r1, #0
	bge _080DB36E
_080DB3F0:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080DB400:
	.4byte gRam
_080DB404:
	.4byte 0x00001082
_080DB408:
	.4byte 0x00000996
_080DB40C:
	.4byte 0x00000979
_080DB410:
	.4byte gUnknown_03003E74
_080DB414:
	.4byte gUnknown_08175D86
_080DB418:
	.4byte 0x00000964
_080DB41C:
	.4byte gUnknown_08175DCE
_080DB420:
	.4byte gUnknown_08175E16
_080DB424:
	.4byte gUnknown_03002BA9
_080DB428:
	.4byte gUnknown_08175E3A
	THUMB_FUNC_END sub_080DB1CC

