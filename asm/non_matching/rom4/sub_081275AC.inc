	THUMB_FUNC_START sub_081275AC
sub_081275AC: @ 0x081275AC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r7, r0, #0
	ldr r4, _08127638  @ =gRam
	ldr r0, _0812763C  @ =0x00001AF8
	add r0, r0, r4
	mov r8, r0
	ldr r0, [r0]
	ldr r1, _08127640  @ =0x00001AD6
	add r4, r4, r1
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #1
	bl sub_08129E0C
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r2, r8
	ldr r0, [r2]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #2
	bl sub_08129E0C
	add r6, r0, #0
	lsl r6, r6, #24
	lsr r6, r6, #24
	mov r3, r8
	ldr r0, [r3]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #3
	bl sub_08129E0C
	add r5, r0, #0
	mov r1, r8
	ldr r0, [r1]
	ldrh r1, [r4]
	add r1, r7, r1
	add r1, r1, #4
	bl sub_08129E0C
	lsl r5, r5, #24
	lsl r0, r0, #24
	lsr r0, r0, #8
	orr r0, r0, r5
	lsr r4, r0, #16
	mov r2, #0
	mov r8, r2
	cmp r6, #0
	bne _08127648
	ldr r0, _08127644  @ =gUnknown_081809AC
	add r1, r4, #0
	sub r1, r1, #103
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r7, #0
	bl _call_via_r1
	cmp r4, #127
	beq _08127630
	b _0812772C
_08127630:
	mov r3, #1
	mov r8, r3
	b _0812772C
	.byte 0x00
	.byte 0x00
_08127638:
	.4byte gRam
_0812763C:
	.4byte 0x00001AF8
_08127640:
	.4byte 0x00001AD6
_08127644:
	.4byte gUnknown_081809AC
_08127648:
	ldr r0, _08127658  @ =0x00000143
	cmp r4, r0
	bls _08127664
	ldr r1, _0812765C  @ =gUnknown_08180A52
	ldr r2, _08127660  @ =0xFFFFFEBC
	add r0, r4, r2
	b _0812766A
	.byte 0x00
	.byte 0x00
_08127658:
	.4byte 0x00000143
_0812765C:
	.4byte gUnknown_08180A52
_08127660:
	.4byte 0xFFFFFEBC
_08127664:
	ldr r1, _081276F4  @ =gUnknown_08180A10
	add r0, r4, #0
	sub r0, r0, #68
_0812766A:
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r5, [r0]
	cmp r4, #68
	bne _08127694
	ldr r2, _081276F8  @ =gRam
	ldr r3, _081276FC  @ =0x00001AD2
	add r2, r2, r3
	ldrh r0, [r2]
	ldr r4, _08127700  @ =gTextPointer
	add r0, r0, r4
	mov r1, #122
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r1, _08127704  @ =gUnknown_02005481
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
_08127694:
	mov r2, #255
	lsl r2, r2, #8
	and r2, r2, r5
	cmp r2, #0
	beq _08127710
	ldr r2, _081276F8  @ =gRam
	ldr r3, _081276FC  @ =0x00001AD2
	add r2, r2, r3
	ldrh r0, [r2]
	ldr r4, _08127700  @ =gTextPointer
	add r0, r0, r4
	mov r3, #122
	strb r3, [r0]
	ldrh r0, [r2]
	ldr r1, _08127704  @ =gUnknown_02005481
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldrh r0, [r2]
	add r4, r4, #2
	add r0, r0, r4
	strb r1, [r0]
	ldrh r0, [r2]
	add r4, r4, #1
	add r0, r0, r4
	strb r5, [r0]
	ldrh r0, [r2]
	add r4, r4, #1
	add r0, r0, r4
	strb r1, [r0]
	ldrh r0, [r2]
	ldr r1, _08127708  @ =gUnknown_02005485
	add r0, r0, r1
	lsr r1, r5, #8
	strb r1, [r0]
	ldrh r0, [r2]
	add r4, r4, #2
	add r0, r0, r4
	strb r3, [r0]
	ldrh r0, [r2]
	ldr r1, _0812770C  @ =gUnknown_02005487
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #8
	strh r0, [r2]
	b _0812772C
_081276F4:
	.4byte gUnknown_08180A10
_081276F8:
	.4byte gRam
_081276FC:
	.4byte 0x00001AD2
_08127700:
	.4byte gTextPointer
_08127704:
	.4byte gUnknown_02005481
_08127708:
	.4byte gUnknown_02005485
_0812770C:
	.4byte gUnknown_02005487
_08127710:
	ldr r1, _08127748  @ =gRam
	ldr r3, _0812774C  @ =0x00001AD2
	add r1, r1, r3
	ldrh r0, [r1]
	ldr r4, _08127750  @ =gTextPointer
	add r0, r0, r4
	strb r2, [r0]
	ldrh r0, [r1]
	ldr r2, _08127754  @ =gUnknown_02005481
	add r0, r0, r2
	strb r5, [r0]
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
_0812772C:
	ldr r1, _08127748  @ =gRam
	ldr r3, _08127758  @ =0x00001AD6
	add r1, r1, r3
	ldrh r0, [r1]
	add r0, r0, r9
	strh r0, [r1]
	mov r0, r8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08127748:
	.4byte gRam
_0812774C:
	.4byte 0x00001AD2
_08127750:
	.4byte gTextPointer
_08127754:
	.4byte gUnknown_02005481
_08127758:
	.4byte 0x00001AD6
	THUMB_FUNC_END sub_081275AC

