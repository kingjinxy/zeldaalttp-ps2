	THUMB_FUNC_START sub_080C11A0
sub_080C11A0: @ 0x080C11A0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #28
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r4, r1, #24
	add r6, r4, #0
	add r1, r4, #0
	bl sub_080AE870
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #16]
	lsl r0, r0, #24
	str r0, [sp, #20]
	asr r5, r0, #24
	cmp r5, #0
	bge _080C11DA
	cmp r4, #1
	bne _080C11D2
	b _080C143C
_080C11D2:
	mov r0, #0
	bl sub_080A3DA0
	b _080C143C
_080C11DA:
	cmp r4, #1
	beq _080C1210
	ldr r2, _080C12F4  @ =gRam
	ldr r1, _080C12F8  @ =0x000016C4
	add r0, r2, r1
	ldr r3, _080C12FC  @ =0x00000952
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r4, #182
	lsl r4, r4, #5
	add r1, r2, r4
	add r3, r3, #6
	add r2, r2, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp]
	mov r0, #32
	mov r1, sp
	bl sub_0812A324
_080C1210:
	ldr r4, _080C12F4  @ =gRam
	ldr r1, _080C1300  @ =0x00000E15
	add r0, r4, r1
	add r0, r0, r5
	mov r10, r0
	mov r2, #0
	strb r6, [r0]
	ldr r3, _080C1304  @ =0x00000E5B
	add r0, r4, r3
	add r0, r0, r5
	mov r8, r0
	ldr r1, _080C1308  @ =gUnknown_08226484
	sub r0, r6, #1
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, r8
	strb r0, [r1]
	sub r3, r3, #40
	add r0, r4, r3
	add r7, r5, r0
	mov r0, #3
	strb r0, [r7]
	ldr r1, _080C130C  @ =0x00000E1F
	add r0, r4, r1
	add r0, r5, r0
	str r0, [sp, #24]
	strb r2, [r0]
	sub r3, r3, #10
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	ldr r1, _080C1310  @ =0x00000A74
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r3, _080C1314  @ =0x00000A7E
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	ldr r0, _080C1318  @ =0x00000E3D
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080C131C  @ =0x000016D5
	add r2, r2, r4
	mov r9, r2
	ldrb r0, [r2]
	lsr r0, r0, #1
	strb r0, [r1]
	ldr r3, [sp, #20]
	lsr r6, r3, #24
	add r0, r6, #0
	bl sub_080ABB30
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C134E
	mov r1, r10
	ldrb r0, [r1]
	cmp r0, #1
	beq _080C133C
	mov r0, #1
	ldr r2, [sp, #24]
	strb r0, [r2]
	mov r0, #31
	strb r0, [r7]
	mov r0, #8
	mov r3, r8
	strb r0, [r3]
	ldr r1, _080C1320  @ =0x00000DCF
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _080C1324  @ =0x00000DE3
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080C12FC  @ =0x00000952
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080C1328  @ =0xFFFF0000
	ldr r2, [sp, #8]
	and r2, r2, r0
	orr r2, r2, r1
	str r2, [sp, #8]
	ldr r1, _080C132C  @ =0x00000DC5
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r3, _080C1330  @ =0x00000DD9
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080C1334  @ =0x00000958
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	ldr r0, _080C1338  @ =0x0000FFFF
	and r0, r0, r2
	orr r0, r0, r1
	str r0, [sp, #8]
	add r1, sp, #8
	mov r0, #37
	bl sub_0812A324
	b _080C143C
	.byte 0x00
	.byte 0x00
_080C12F4:
	.4byte gRam
_080C12F8:
	.4byte 0x000016C4
_080C12FC:
	.4byte 0x00000952
_080C1300:
	.4byte 0x00000E15
_080C1304:
	.4byte 0x00000E5B
_080C1308:
	.4byte gUnknown_08226484
_080C130C:
	.4byte 0x00000E1F
_080C1310:
	.4byte 0x00000A74
_080C1314:
	.4byte 0x00000A7E
_080C1318:
	.4byte 0x00000E3D
_080C131C:
	.4byte 0x000016D5
_080C1320:
	.4byte 0x00000DCF
_080C1324:
	.4byte 0x00000DE3
_080C1328:
	.4byte 0xFFFF0000
_080C132C:
	.4byte 0x00000DC5
_080C1330:
	.4byte 0x00000DD9
_080C1334:
	.4byte 0x00000958
_080C1338:
	.4byte 0x0000FFFF
_080C133C:
	mov r0, #4
	mov r4, r10
	strb r0, [r4]
	mov r0, #7
	strb r0, [r7]
	mov r0, #16
	mov r1, r8
	strb r0, [r1]
	b _080C143C
_080C134E:
	mov r2, r9
	ldrb r0, [r2]
	lsr r6, r0, #1
	ldr r0, _080C13D4  @ =0x000016C4
	add r3, r4, r0
	ldr r0, _080C13D8  @ =gUnknown_08171D4A
	lsl r2, r6, #1
	add r0, r2, r0
	ldrh r1, [r0]
	ldrh r3, [r3]
	add r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #182
	lsl r0, r0, #5
	add r3, r4, r0
	ldr r0, _080C13DC  @ =gUnknown_08171D52
	add r2, r2, r0
	ldrh r2, [r2]
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080C13E0  @ =0x00000DCF
	add r0, r4, r3
	add r0, r5, r0
	strb r1, [r0]
	add r3, r3, #20
	add r0, r4, r3
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080C13E4  @ =0x00000DC5
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	sub r3, r3, #10
	add r0, r4, r3
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	mov r1, r10
	ldrb r0, [r1]
	cmp r0, #1
	bne _080C13F8
	ldr r0, _080C13E8  @ =gSword
	ldrb r1, [r0]
	sub r1, r1, #2
	lsl r1, r1, #2
	add r1, r6, r1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r3, r3, #30
	add r2, r4, r3
	add r2, r5, r2
	ldr r0, _080C13EC  @ =gUnknown_08171D62
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080C13F0  @ =0x00000DED
	add r2, r4, r0
	add r2, r5, r2
	ldr r0, _080C13F4  @ =gUnknown_08171D6E
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	b _080C1414
_080C13D4:
	.4byte 0x000016C4
_080C13D8:
	.4byte gUnknown_08171D4A
_080C13DC:
	.4byte gUnknown_08171D52
_080C13E0:
	.4byte 0x00000DCF
_080C13E4:
	.4byte 0x00000DC5
_080C13E8:
	.4byte gSword
_080C13EC:
	.4byte gUnknown_08171D62
_080C13F0:
	.4byte 0x00000DED
_080C13F4:
	.4byte gUnknown_08171D6E
_080C13F8:
	ldr r2, _080C144C  @ =0x00000DF7
	add r1, r4, r2
	add r1, r5, r1
	ldr r0, _080C1450  @ =gUnknown_08171D5A
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080C1454  @ =0x00000DED
	add r1, r4, r3
	add r1, r5, r1
	ldr r0, _080C1458  @ =gUnknown_08171D5E
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
_080C1414:
	ldr r2, _080C145C  @ =gRam
	ldr r4, [sp, #16]
	lsl r3, r4, #24
	asr r3, r3, #24
	ldr r1, _080C1460  @ =0x00000E47
	add r0, r2, r1
	add r0, r3, r0
	mov r4, #161
	lsl r4, r4, #4
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, #195
	lsl r1, r1, #5
	add r0, r2, r1
	add r3, r3, r0
	ldr r4, _080C1464  @ =0x00000B1E
	add r2, r2, r4
	ldrh r0, [r2]
	strb r0, [r3]
_080C143C:
	add sp, sp, #28
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C144C:
	.4byte 0x00000DF7
_080C1450:
	.4byte gUnknown_08171D5A
_080C1454:
	.4byte 0x00000DED
_080C1458:
	.4byte gUnknown_08171D5E
_080C145C:
	.4byte gRam
_080C1460:
	.4byte 0x00000E47
_080C1464:
	.4byte 0x00000B1E
	THUMB_FUNC_END sub_080C11A0

