	THUMB_FUNC_START sub_080AB2E0
sub_080AB2E0: @ 0x080AB2E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r0, _080AB378  @ =gRam
	ldr r1, _080AB37C  @ =0x00001650
	add r3, r0, r1
	ldrb r2, [r3]
	cmp r2, #0
	beq _080AB2FA
	b _080AB470
_080AB2FA:
	mov r6, #111
	mov r2, #2
	str r2, [sp]
	mov r3, #151
	lsl r3, r3, #4
	add r4, r0, #0
	add r3, r3, r4
	mov r10, r3
	ldr r5, _080AB380  @ =0x00000978
	add r5, r5, r4
	mov r9, r5
	ldr r4, _080AB384  @ =gUnknown_02000CDE
	mov r7, #248
	lsl r7, r7, #7
	mov r8, r7
_080AB318:
	ldrh r1, [r4]
	mov r0, #31
	and r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r1
	ldr r2, _080AB378  @ =gRam
	ldr r3, _080AB388  @ =0x00000974
	add r1, r2, r3
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, r8
	and r0, r0, r1
	mov r5, r9
	strh r0, [r5]
	ldr r1, _080AB38C  @ =gUnknown_0816E050
	ldr r7, [sp]
	lsl r0, r7, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl sub_08133468
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r0, #0
	mov r2, #31
	and r1, r1, r2
	add r2, r0, #0
	mov r3, #248
	lsl r3, r3, #2
	and r2, r2, r3
	add r3, r0, #0
	mov r5, r8
	and r3, r3, r5
	mov r7, r10
	mov r5, #0
	ldrsh r0, [r7, r5]
	cmp r0, r1
	beq _080AB396
	cmp r0, r1
	ble _080AB390
	ldrh r0, [r4]
	sub r0, r0, #1
	b _080AB394
	.byte 0x00
	.byte 0x00
_080AB378:
	.4byte gRam
_080AB37C:
	.4byte 0x00001650
_080AB380:
	.4byte 0x00000978
_080AB384:
	.4byte gUnknown_02000CDE
_080AB388:
	.4byte 0x00000974
_080AB38C:
	.4byte gUnknown_0816E050
_080AB390:
	ldrh r0, [r4]
	add r0, r0, #1
_080AB394:
	strh r0, [r4]
_080AB396:
	ldr r7, _080AB3B0  @ =gRam
	ldr r1, _080AB3B4  @ =0x00000974
	add r0, r7, r1
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, r2
	beq _080AB3BE
	cmp r0, r2
	ble _080AB3B8
	ldrh r0, [r4]
	sub r0, r0, #32
	b _080AB3BC
	.byte 0x00
	.byte 0x00
_080AB3B0:
	.4byte gRam
_080AB3B4:
	.4byte 0x00000974
_080AB3B8:
	ldrh r0, [r4]
	add r0, r0, #32
_080AB3BC:
	strh r0, [r4]
_080AB3BE:
	mov r7, r9
	mov r1, #0
	ldrsh r0, [r7, r1]
	cmp r0, r3
	beq _080AB3E8
	cmp r0, r3
	ble _080AB3DC
	ldr r2, _080AB3D8  @ =0xFFFFFC00
	add r0, r2, #0
	ldrh r3, [r4]
	add r0, r0, r3
	b _080AB3E6
	.byte 0x00
	.byte 0x00
_080AB3D8:
	.4byte 0xFFFFFC00
_080AB3DC:
	mov r5, #128
	lsl r5, r5, #3
	add r0, r5, #0
	ldrh r7, [r4]
	add r0, r0, r7
_080AB3E6:
	strh r0, [r4]
_080AB3E8:
	ldr r0, [sp]
	add r0, r0, #1
	str r0, [sp]
	add r4, r4, #2
	add r6, r6, #1
	cmp r6, #112
	bne _080AB318
	ldr r1, _080AB448  @ =gUnknown_02000CEE
	ldr r0, _080AB44C  @ =gUnknown_02000CDE
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _080AB450  @ =gRam
	ldr r2, _080AB454  @ =0x0000164F
	add r3, r1, r2
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r4, _080AB458  @ =0x0000099B
	add r2, r1, r4
	mov r1, #1
	strb r1, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _080AB42A
	ldr r5, _080AB450  @ =gRam
	ldr r7, _080AB45C  @ =0x00001650
	add r0, r5, r7
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
	strb r0, [r3]
_080AB42A:
	ldrb r0, [r3]
	cmp r0, #25
	bhi _080AB432
	b _080AB5C0
_080AB432:
	ldr r0, _080AB460  @ =0x00001D59
	bl sub_08133468
	ldr r1, _080AB464  @ =gUnknown_02000CDA
	strh r0, [r1]
	ldr r0, _080AB468  @ =0x000025FF
	bl sub_08133468
	ldr r1, _080AB46C  @ =gUnknown_02000CDC
	strh r0, [r1]
	b _080AB5C0
_080AB448:
	.4byte gUnknown_02000CEE
_080AB44C:
	.4byte gUnknown_02000CDE
_080AB450:
	.4byte gRam
_080AB454:
	.4byte 0x0000164F
_080AB458:
	.4byte 0x0000099B
_080AB45C:
	.4byte 0x00001650
_080AB460:
	.4byte 0x00001D59
_080AB464:
	.4byte gUnknown_02000CDA
_080AB468:
	.4byte 0x000025FF
_080AB46C:
	.4byte gUnknown_02000CDC
_080AB470:
	cmp r2, #1
	beq _080AB476
	b _080AB5AC
_080AB476:
	mov r6, #109
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r0
	mov r8, r1
	mov r2, #248
	lsl r2, r2, #2
	mov r10, r2
	mov r3, #248
	lsl r3, r3, #7
	mov r9, r3
	ldr r4, _080AB4E0  @ =gUnknown_02000CDA
	mov r5, #218
	str r5, [sp, #4]
	ldr r7, _080AB4E4  @ =0x00000974
	add r7, r7, r0
	mov r12, r7
_080AB498:
	ldrh r1, [r4]
	mov r0, #31
	and r0, r0, r1
	mov r1, r8
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, r10
	and r0, r0, r1
	mov r2, r12
	strh r0, [r2]
	ldrh r1, [r4]
	mov r0, r9
	and r0, r0, r1
	ldr r3, _080AB4E8  @ =gUnknown_03002BA8
	strh r0, [r3]
	ldr r5, [sp, #4]
	ldr r7, _080AB4EC  @ =gUnknown_02000800
	add r0, r5, r7
	ldrh r0, [r0]
	mov r1, #31
	and r1, r1, r0
	mov r2, r10
	and r2, r2, r0
	mov r3, r9
	and r3, r3, r0
	mov r5, r8
	mov r7, #0
	ldrsh r0, [r5, r7]
	cmp r0, r1
	beq _080AB4F6
	cmp r0, r1
	ble _080AB4F0
	ldrh r0, [r4]
	sub r0, r0, #1
	b _080AB4F4
	.byte 0x00
	.byte 0x00
_080AB4E0:
	.4byte gUnknown_02000CDA
_080AB4E4:
	.4byte 0x00000974
_080AB4E8:
	.4byte gUnknown_03002BA8
_080AB4EC:
	.4byte gUnknown_02000800
_080AB4F0:
	ldrh r0, [r4]
	add r0, r0, #1
_080AB4F4:
	strh r0, [r4]
_080AB4F6:
	mov r1, r12
	mov r5, #0
	ldrsh r0, [r1, r5]
	cmp r0, r2
	beq _080AB510
	cmp r0, r2
	ble _080AB50A
	ldrh r0, [r4]
	sub r0, r0, #32
	b _080AB50E
_080AB50A:
	ldrh r0, [r4]
	add r0, r0, #32
_080AB50E:
	strh r0, [r4]
_080AB510:
	ldr r7, _080AB528  @ =gUnknown_03002BA8
	mov r1, #0
	ldrsh r0, [r7, r1]
	cmp r0, r3
	beq _080AB53C
	cmp r0, r3
	ble _080AB530
	ldr r2, _080AB52C  @ =0xFFFFFC00
	add r0, r2, #0
	ldrh r3, [r4]
	add r0, r0, r3
	b _080AB53A
_080AB528:
	.4byte gUnknown_03002BA8
_080AB52C:
	.4byte 0xFFFFFC00
_080AB530:
	mov r5, #128
	lsl r5, r5, #3
	add r0, r5, #0
	ldrh r7, [r4]
	add r0, r0, r7
_080AB53A:
	strh r0, [r4]
_080AB53C:
	add r4, r4, #2
	ldr r0, [sp, #4]
	add r0, r0, #2
	str r0, [sp, #4]
	add r6, r6, #1
	cmp r6, #112
	bne _080AB498
	ldr r1, _080AB58C  @ =gUnknown_02000CEE
	ldr r0, _080AB590  @ =gUnknown_02000CDE
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _080AB594  @ =gRam
	ldr r2, _080AB598  @ =0x0000164F
	add r3, r1, r2
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r4, _080AB59C  @ =0x0000099B
	add r2, r1, r4
	mov r1, #1
	strb r1, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #36
	bls _080AB5C0
	ldr r5, _080AB594  @ =gRam
	ldr r7, _080AB5A0  @ =0x00001650
	add r1, r5, r7
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080AB5A4  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	ldr r1, _080AB5A8  @ =gUnknown_0822BFFE
	add r0, r0, r1
	ldrb r0, [r0]
	b _080AB5BE
_080AB58C:
	.4byte gUnknown_02000CEE
_080AB590:
	.4byte gUnknown_02000CDE
_080AB594:
	.4byte gRam
_080AB598:
	.4byte 0x0000164F
_080AB59C:
	.4byte 0x0000099B
_080AB5A0:
	.4byte 0x00001650
_080AB5A4:
	.4byte 0x00000996
_080AB5A8:
	.4byte gUnknown_0822BFFE
_080AB5AC:
	ldr r2, _080AB5D0  @ =0x0000164F
	add r1, r0, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080AB5C0
_080AB5BE:
	strb r0, [r3]
_080AB5C0:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080AB5D0:
	.4byte 0x0000164F
	THUMB_FUNC_END sub_080AB2E0

