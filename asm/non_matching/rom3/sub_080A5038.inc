	THUMB_FUNC_START sub_080A5038
sub_080A5038: @ 0x080A5038
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080A508C  @ =gShield
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A504C
	b _080A5226
_080A504C:
	ldr r4, _080A5090  @ =gRam
	ldr r1, _080A5094  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A505A
	b _080A5226
_080A505A:
	bl sub_080A581C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080A5068
	b _080A5226
_080A5068:
	ldr r2, _080A5098  @ =0x00000964
	add r0, r4, r2
	ldrh r0, [r0]
	mov r9, r0
	ldr r3, _080A509C  @ =0x000016C9
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080A50A4
	ldr r1, _080A50A0  @ =0x000016C8
	add r0, r4, r1
	ldrb r3, [r0]
	cmp r3, #239
	bls _080A50AA
	mov r3, #0
	b _080A50AA
_080A508C:
	.4byte gShield
_080A5090:
	.4byte gRam
_080A5094:
	.4byte 0x0000165E
_080A5098:
	.4byte 0x00000964
_080A509C:
	.4byte 0x000016C9
_080A50A0:
	.4byte 0x000016C8
_080A50A4:
	ldr r2, _080A5234  @ =0x000016C8
	add r0, r4, r2
	ldrb r3, [r0]
_080A50AA:
	ldr r4, _080A5238  @ =gRam
	ldr r0, _080A523C  @ =0x00000961
	add r2, r4, r0
	ldr r0, _080A5240  @ =gUnknown_0816A6E6
	add r0, r0, r9
	ldrb r1, [r0]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r0, r3, #24
	asr r0, r0, #24
	add r0, r0, #1
	sub r1, r1, r0
	ldr r2, _080A5244  @ =0x00000975
	add r0, r4, r2
	mov r5, #0
	strb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	ldr r2, _080A5248  @ =gUnknown_0816A8EB
	add r2, r2, r9
	ldrb r0, [r2]
	ldrb r1, [r1]
	add r0, r0, r1
	add r3, r3, #20
	add r1, r4, r3
	strb r0, [r1]
	sub r3, r3, #4
	add r1, r4, r3
	strb r0, [r1]
	ldrb r3, [r2]
	add r0, r3, #0
	bl sub_080A6B40
	ldr r1, _080A524C  @ =0x0000097C
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _080A5250  @ =0x0000097D
	add r2, r4, r3
	mov r0, #10
	strb r0, [r2]
	ldr r1, _080A5254  @ =0x000017D6
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080A5110
	mov r0, #6
	strb r0, [r2]
_080A5110:
	ldr r3, _080A5258  @ =0x0000096C
	add r2, r4, r3
	ldrh r0, [r2]
	lsl r1, r0, #1
	add r0, r0, r1
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r9, r0
	strh r5, [r2]
	ldr r1, _080A525C  @ =0x00001732
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r1, _080A5260  @ =gUnknown_0816B310
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r2, _080A5264  @ =0x00000968
	add r0, r4, r2
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r3, _080A5268  @ =0x000017E2
	add r0, r4, r3
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	mov r10, r4
_080A514A:
	ldr r0, _080A526C  @ =0x00001734
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080A5270  @ =gUnknown_08169708
	mov r2, r9
	lsr r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r2, [r0]
	ldr r0, _080A5274  @ =0x0000FFFF
	cmp r2, r0
	beq _080A51E4
	ldr r3, _080A5278  @ =0x0000C1FF
	add r0, r3, #0
	and r2, r2, r0
	ldr r1, _080A524C  @ =0x0000097C
	add r0, r4, r1
	ldrh r0, [r0]
	orr r2, r2, r0
	ldr r3, _080A527C  @ =0x00001723
	add r0, r4, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r2, r2, r1
	lsl r1, r2, #16
	lsr r1, r1, #16
	mov r0, r8
	bl sub_080A452C
	ldr r1, _080A5280  @ =0x00000974
	add r0, r4, r1
	ldrb r5, [r0]
	ldr r2, _080A5244  @ =0x00000975
	add r0, r4, r2
	ldrb r7, [r0]
	mov r3, r8
	lsr r0, r3, #2
	lsl r0, r0, #3
	mov r2, #170
	lsl r2, r2, #3
	add r1, r4, r2
	add r2, r0, r1
	ldr r0, _080A5284  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A51D8
	ldr r3, _080A5288  @ =0x000001FF
	add r4, r3, #0
	ldrh r0, [r2, #2]
	ldr r6, _080A528C  @ =0xFFFFFE00
	add r3, r6, #0
	and r3, r3, r0
	orr r3, r3, r5
	strh r3, [r2, #2]
	strb r7, [r2]
	cmp r5, #240
	bls _080A51D8
	lsl r0, r3, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r3, r3, r6
	orr r3, r3, r0
	strh r3, [r2, #2]
_080A51D8:
	mov r0, r8
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldr r4, _080A5238  @ =gRam
_080A51E4:
	ldr r3, _080A5280  @ =0x00000974
	add r3, r3, r10
	ldrb r0, [r3]
	add r0, r0, #8
	strb r0, [r3]
	mov r0, r9
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r2, _080A5258  @ =0x0000096C
	add r2, r2, r10
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080A521E
	ldr r0, _080A5244  @ =0x00000975
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r3]
_080A521E:
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #3
	bne _080A514A
_080A5226:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A5234:
	.4byte 0x000016C8
_080A5238:
	.4byte gRam
_080A523C:
	.4byte 0x00000961
_080A5240:
	.4byte gUnknown_0816A6E6
_080A5244:
	.4byte 0x00000975
_080A5248:
	.4byte gUnknown_0816A8EB
_080A524C:
	.4byte 0x0000097C
_080A5250:
	.4byte 0x0000097D
_080A5254:
	.4byte 0x000017D6
_080A5258:
	.4byte 0x0000096C
_080A525C:
	.4byte 0x00001732
_080A5260:
	.4byte gUnknown_0816B310
_080A5264:
	.4byte 0x00000968
_080A5268:
	.4byte 0x000017E2
_080A526C:
	.4byte 0x00001734
_080A5270:
	.4byte gUnknown_08169708
_080A5274:
	.4byte 0x0000FFFF
_080A5278:
	.4byte 0x0000C1FF
_080A527C:
	.4byte 0x00001723
_080A5280:
	.4byte 0x00000974
_080A5284:
	.4byte gUnknown_03003E68
_080A5288:
	.4byte 0x000001FF
_080A528C:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_080A5038

