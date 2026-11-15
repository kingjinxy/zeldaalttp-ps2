	THUMB_FUNC_START sub_080A5FC4
sub_080A5FC4: @ 0x080A5FC4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r0, #0
	mov r10, r0
	ldr r2, _080A6128  @ =gRam
	ldr r1, _080A612C  @ =0x00001708
	add r3, r2, r1
	mov r4, #182
	lsl r4, r4, #5
	add r0, r2, r4
	ldrb r1, [r0]
	add r1, r1, #12
	ldrb r0, [r3]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	add r3, r2, #0
	cmp r0, #239
	bhi _080A6004
	cmp r0, #47
	bls _080A5FFC
	mov r0, #4
	mov r10, r0
_080A5FFC:
	cmp r1, #95
	bls _080A6004
	mov r1, #8
	mov r10, r1
_080A6004:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	ldrb r2, [r0]
	ldr r1, _080A6130  @ =gUnknown_0816B521
	mov r4, r10
	lsr r0, r4, #2
	add r0, r0, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r9, r2
	ldr r1, _080A612C  @ =0x00001708
	add r0, r3, r1
	ldrb r0, [r0]
	ldr r2, _080A6134  @ =0x00000958
	add r1, r3, r2
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #17
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp]
	ldr r4, _080A6138  @ =0x00000968
	add r2, r3, r4
	mov r0, #0
	strb r0, [r2]
	ldr r1, _080A613C  @ =gUnknown_0816B318
	ldr r4, _080A6140  @ =0x00001732
	add r0, r3, r4
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r4, _080A6144  @ =0x00000965
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r1, r1, r0
	ldr r4, _080A6148  @ =0x000017E2
	add r0, r3, r4
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
_080A6062:
	ldr r2, _080A614C  @ =gUnknown_08169774
	mov r0, r10
	lsr r1, r0, #1
	lsl r0, r1, #1
	add r0, r0, r2
	ldrh r0, [r0]
	add r7, r1, #0
	ldr r1, _080A6150  @ =0x0000FFFF
	cmp r0, r1
	beq _080A60EC
	lsr r2, r6, #2
	lsl r1, r2, #3
	ldr r0, _080A6154  @ =gUnknown_03002780
	add r3, r1, r0
	ldr r0, _080A6158  @ =gUnknown_03003E68
	ldrb r0, [r0]
	mov r8, r2
	cmp r0, #0
	bne _080A60BA
	ldr r2, _080A615C  @ =0x000001FF
	add r5, r2, #0
	mov r0, r9
	and r0, r0, r5
	ldrh r1, [r3, #2]
	ldr r4, _080A6160  @ =0xFFFFFE00
	add r2, r4, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r3]
	mov r1, r9
	cmp r1, #240
	bls _080A60BA
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r5
	and r2, r2, r4
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A60BA:
	lsl r0, r7, #1
	ldr r2, _080A614C  @ =gUnknown_08169774
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r3, _080A6164  @ =0x0000CFFF
	add r0, r3, #0
	and r1, r1, r0
	ldr r4, _080A6128  @ =gRam
	ldr r2, _080A6168  @ =0x000017EE
	add r0, r4, r2
	ldrh r0, [r0]
	orr r1, r1, r0
	add r0, r6, #0
	bl sub_080A452C
	mov r3, r8
	lsl r1, r3, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r4, r2
	add r1, r1, r0
	ldrb r2, [r1, #3]
	mov r0, #63
	and r0, r0, r2
	strb r0, [r1, #3]
_080A60EC:
	mov r0, r10
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	add r0, r6, #4
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r0, r9
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r3, _080A616C  @ =gUnknown_03002B98
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #2
	bne _080A6062
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
_080A6128:
	.4byte gRam
_080A612C:
	.4byte 0x00001708
_080A6130:
	.4byte gUnknown_0816B521
_080A6134:
	.4byte 0x00000958
_080A6138:
	.4byte 0x00000968
_080A613C:
	.4byte gUnknown_0816B318
_080A6140:
	.4byte 0x00001732
_080A6144:
	.4byte 0x00000965
_080A6148:
	.4byte 0x000017E2
_080A614C:
	.4byte gUnknown_08169774
_080A6150:
	.4byte 0x0000FFFF
_080A6154:
	.4byte gUnknown_03002780
_080A6158:
	.4byte gUnknown_03003E68
_080A615C:
	.4byte 0x000001FF
_080A6160:
	.4byte 0xFFFFFE00
_080A6164:
	.4byte 0x0000CFFF
_080A6168:
	.4byte 0x000017EE
_080A616C:
	.4byte gUnknown_03002B98
	THUMB_FUNC_END sub_080A5FC4

