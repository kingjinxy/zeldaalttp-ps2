	THUMB_FUNC_START sub_080928F0
sub_080928F0: @ 0x080928F0
	push {r4-r6,lr}
	ldr r4, _08092950  @ =gRam
	ldr r2, _08092954  @ =0x00000968
	add r1, r4, r2
	mov r2, #0
	strh r0, [r1]
	ldr r3, _08092958  @ =0x00000DB8
	add r6, r4, r3
	strb r2, [r6]
	ldr r1, _0809295C  @ =gUnknown_082264C8
	ldr r2, _08092960  @ =0x000009DA
	add r0, r4, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r3, [r0]
	mov r5, #1
	neg r5, r5
	ldrb r2, [r3]
	ldrb r0, [r3, #1]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldr r0, _08092964  @ =0x0000FFFF
	cmp r2, r0
	beq _080929BC
	add r1, r4, #0
_08092924:
	add r5, r5, #1
	ldr r4, _08092968  @ =0x00007FFF
	add r0, r4, #0
	and r2, r2, r0
	ldr r4, _08092954  @ =0x00000968
	add r0, r1, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, r2
	bne _080929AC
	ldrb r2, [r3, #2]
	add r4, r2, #0
	cmp r2, #0
	beq _080929BC
	lsl r0, r2, #24
	cmp r0, #0
	bge _0809296C
	add r0, r2, #0
	bl sub_080929C8
	b _080929BC
	.byte 0x00
	.byte 0x00
_08092950:
	.4byte gRam
_08092954:
	.4byte 0x00000968
_08092958:
	.4byte 0x00000DB8
_0809295C:
	.4byte gUnknown_082264C8
_08092960:
	.4byte 0x000009DA
_08092964:
	.4byte 0x0000FFFF
_08092968:
	.4byte 0x00007FFF
_0809296C:
	ldr r3, _080929A0  @ =0x0000097C
	add r0, r1, r3
	strh r2, [r0]
	cmp r2, #8
	beq _0809299A
	mov r0, #128
	lsl r0, r0, #9
	lsl r0, r0, r5
	lsr r3, r0, #16
	ldr r2, _080929A4  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r2, _080929A8  @ =gUnknown_02002600
	add r1, r0, r2
	ldrh r2, [r1]
	add r0, r3, #0
	and r0, r0, r2
	cmp r0, #0
	bne _080929BC
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
_0809299A:
	strb r4, [r6]
	b _080929BC
	.byte 0x00
	.byte 0x00
_080929A0:
	.4byte 0x0000097C
_080929A4:
	.4byte 0x000009DA
_080929A8:
	.4byte gUnknown_02002600
_080929AC:
	add r3, r3, #3
	ldrb r2, [r3]
	ldrb r0, [r3, #1]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldr r0, _080929C4  @ =0x0000FFFF
	cmp r2, r0
	bne _08092924
_080929BC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080929C4:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080928F0

