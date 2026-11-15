	THUMB_FUNC_START sub_0807561C
sub_0807561C: @ 0x0807561C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	bl sub_08133594
	ldr r3, _0807571C  @ =gRam
	ldr r1, _08075720  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807563A
	b _080757C8
_0807563A:
	mov r4, #216
	mov r5, #150
	lsl r5, r5, #4
	add r2, r3, r5
	mov r0, #2
	strh r0, [r2]
	ldr r7, _08075724  @ =0x00000964
	add r1, r3, r7
	mov r0, #3
	strh r0, [r1]
	mov r8, r3
	mov r9, r2
	mov r0, #8
	mov r12, r0
	ldr r6, _08075728  @ =gUnknown_020017B0
	ldr r5, _0807572C  @ =gUnknown_020017A0
_0807565A:
	lsl r1, r4, #1
	ldrh r0, [r5]
	strh r0, [r6]
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r7, _08075730  @ =gUnknown_02001604
	add r0, r1, r7
	strh r2, [r0]
	add r7, r7, #4
	add r0, r1, r7
	strh r2, [r0]
	ldr r0, _08075734  @ =gUnknown_0200160C
	add r1, r1, r0
	strh r2, [r1]
	sub r5, r5, #16
	mov r1, r9
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807568A
	mov r2, r12
	strh r2, [r1]
_0807568A:
	sub r6, r6, #16
	sub r4, r4, #8
	ldr r1, _08075724  @ =0x00000964
	add r1, r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080756A2
	mov r7, r12
	strh r7, [r1]
_080756A2:
	cmp r4, #0
	bne _0807565A
	ldr r0, _08075738  @ =0x00000C6A
	add r0, r0, r3
	mov r12, r0
	ldrh r6, [r0]
	lsr r2, r6, #1
	ldr r1, _0807573C  @ =0x00000C76
	add r1, r1, r3
	mov r8, r1
	lsl r2, r2, #1
	mov r5, #199
	lsl r5, r5, #4
	add r0, r3, r5
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r7, [r1]
	add r0, r0, r7
	mov r1, #150
	lsl r1, r1, #4
	add r5, r3, r1
	strh r0, [r5]
	ldr r7, _08075740  @ =0x00000C6C
	add r1, r3, r7
	add r2, r2, r1
	ldrh r1, [r2]
	sub r0, r0, r1
	eor r0, r0, r1
	lsl r0, r0, #16
	cmp r0, #0
	blt _080756F8
	ldr r1, _08075744  @ =0x00000C74
	add r0, r3, r1
	strh r4, [r0]
	add r7, r7, #12
	add r0, r3, r7
	strh r4, [r0]
	mov r0, #2
	eor r0, r0, r6
	mov r1, r12
	strh r0, [r1]
	ldrh r0, [r2]
	strh r0, [r5]
_080756F8:
	ldrh r1, [r5]
	mov r2, r8
	strh r1, [r2]
	ldr r4, _08075748  @ =0x00000C78
	add r2, r3, r4
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r5]
	mov r0, #255
	and r0, r0, r1
	strh r0, [r2]
	lsl r0, r1, #16
	cmp r0, #0
	bge _0807574C
	mov r0, #255
	orr r1, r1, r0
	b _08075750
	.byte 0x00
	.byte 0x00
_0807571C:
	.4byte gRam
_08075720:
	.4byte 0x00000996
_08075724:
	.4byte 0x00000964
_08075728:
	.4byte gUnknown_020017B0
_0807572C:
	.4byte gUnknown_020017A0
_08075730:
	.4byte gUnknown_02001604
_08075734:
	.4byte gUnknown_0200160C
_08075738:
	.4byte 0x00000C6A
_0807573C:
	.4byte 0x00000C76
_08075740:
	.4byte 0x00000C6C
_08075744:
	.4byte 0x00000C74
_08075748:
	.4byte 0x00000C78
_0807574C:
	ldr r0, _080757D4  @ =0xFFFFFF00
	and r1, r1, r0
_08075750:
	strh r1, [r5]
	ldr r5, _080757D8  @ =0x00000961
	add r0, r3, r5
	ldrb r0, [r0]
	ldr r7, _080757DC  @ =0x00000964
	add r2, r3, r7
	strb r0, [r2]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r4, _080757E0  @ =0x00000965
	add r0, r3, r4
	strb r1, [r0]
	ldr r5, _080757E4  @ =0x00000C74
	add r1, r3, r5
	ldrh r0, [r2]
	ldrh r7, [r1]
	add r0, r0, r7
	strh r0, [r1]
	ldrh r2, [r1]
	ldr r1, _080757E8  @ =0x00000CF8
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #47
	bls _080757AC
	ldr r0, _080757EC  @ =0x0000FFF8
	and r0, r0, r2
	cmp r0, #0
	bne _080757AC
	ldr r2, _080757F0  @ =0x00000C6C
	add r1, r3, r2
	mov r0, #255
	lsl r0, r0, #8
	strh r0, [r1]
	ldr r4, _080757F4  @ =0x00000C6E
	add r1, r3, r4
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r1]
	mov r2, #0
	ldr r5, _080757F8  @ =0x000009E8
	add r1, r3, r5
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080757AC:
	ldr r7, _080757FC  @ =0x00000952
	add r0, r3, r7
	ldrh r0, [r0]
	add r0, r2, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _08075800  @ =gUnknown_02001600
	strh r2, [r0]
	add r0, r0, #4
	strh r2, [r0]
	add r0, r0, #4
	strh r2, [r0]
	add r0, r0, #4
	strh r2, [r0]
_080757C8:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080757D4:
	.4byte 0xFFFFFF00
_080757D8:
	.4byte 0x00000961
_080757DC:
	.4byte 0x00000964
_080757E0:
	.4byte 0x00000965
_080757E4:
	.4byte 0x00000C74
_080757E8:
	.4byte 0x00000CF8
_080757EC:
	.4byte 0x0000FFF8
_080757F0:
	.4byte 0x00000C6C
_080757F4:
	.4byte 0x00000C6E
_080757F8:
	.4byte 0x000009E8
_080757FC:
	.4byte 0x00000952
_08075800:
	.4byte gUnknown_02001600
	THUMB_FUNC_END sub_0807561C

