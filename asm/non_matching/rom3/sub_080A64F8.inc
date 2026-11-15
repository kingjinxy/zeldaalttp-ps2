	THUMB_FUNC_START sub_080A64F8
sub_080A64F8: @ 0x080A64F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	bl sub_080A6494
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080A6510
	b _080A66DA
_080A6510:
	ldr r2, _080A66E8  @ =gRam
	ldr r1, _080A66EC  @ =0x00000964
	add r0, r2, r1
	ldrh r0, [r0]
	mov r9, r0
	ldr r3, _080A66F0  @ =0x00000961
	add r1, r2, r3
	ldr r0, _080A66F4  @ =gUnknown_0816A6E6
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	sub r0, r0, #1
	add r3, r3, #20
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldr r0, _080A66F8  @ =gUnknown_0816A8EB
	add r0, r0, r9
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	sub r3, r3, #1
	add r1, r2, r3
	strb r0, [r1]
	sub r3, r3, #4
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080A66FC  @ =0x0000097C
	add r0, r2, r1
	mov r3, #0
	strb r3, [r0]
	ldr r0, _080A6700  @ =0x0000097D
	add r3, r2, r0
	mov r0, #10
	strb r0, [r3]
	ldr r1, _080A6704  @ =0x000017D6
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _080A6572
	mov r0, #6
	strb r0, [r3]
_080A6572:
	ldr r3, _080A6708  @ =0x0000096C
	add r2, r4, r3
	ldrh r0, [r2]
	lsl r1, r0, #1
	add r0, r0, r1
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r9, r0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _080A670C  @ =gUnknown_0816B310
	ldr r1, [r0]
	ldr r2, _080A6710  @ =0x00000968
	add r0, r4, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r1, r1, r0
	ldr r0, _080A6714  @ =gUnknown_03003E74
	ldrh r0, [r0]
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	mov r10, r4
_080A65A6:
	ldr r0, _080A6718  @ =gUnknown_08169708
	mov r2, r9
	lsr r1, r2, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r2, [r1]
	ldr r0, _080A671C  @ =0x0000FFFF
	cmp r2, r0
	beq _080A6696
	ldr r3, _080A6720  @ =0x0000C1FF
	add r0, r3, #0
	and r2, r2, r0
	ldr r0, _080A66FC  @ =0x0000097C
	add r0, r0, r10
	ldrh r0, [r0]
	orr r2, r2, r0
	ldr r0, _080A6724  @ =0x00001723
	add r0, r0, r10
	ldrb r1, [r0]
	ldr r0, _080A6728  @ =0x00001724
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r2, r2, r1
	lsl r1, r2, #16
	lsr r1, r1, #16
	ldr r2, _080A672C  @ =0x0000F1FF
	add r0, r2, #0
	and r1, r1, r0
	mov r3, #0
	lsl r0, r3, #9
	orr r1, r1, r0
	mov r2, #128
	lsl r2, r2, #1
	add r0, r2, #0
	orr r1, r1, r0
	mov r0, r8
	bl sub_080A452C
	ldr r0, _080A6730  @ =0x00000974
	add r0, r0, r10
	ldrb r5, [r0]
	ldr r0, _080A6734  @ =0x00000975
	add r0, r0, r10
	ldrb r7, [r0]
	mov r3, r8
	lsr r1, r3, #2
	lsl r0, r1, #3
	ldr r2, _080A6738  @ =gUnknown_03002780
	add r3, r0, r2
	ldr r0, _080A673C  @ =gUnknown_03003E68
	ldrb r0, [r0]
	mov r12, r1
	cmp r0, #0
	bne _080A663E
	ldr r0, _080A6740  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r3, #2]
	ldr r6, _080A6744  @ =0xFFFFFE00
	add r2, r6, #0
	and r2, r2, r0
	orr r2, r2, r5
	strh r2, [r3, #2]
	strb r7, [r3]
	cmp r5, #240
	bls _080A663E
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r6
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A663E:
	mov r1, r12
	lsl r0, r1, #3
	ldr r2, _080A6738  @ =gUnknown_03002780
	add r4, r0, r2
	ldr r3, _080A6748  @ =0x0000108C
	add r5, r2, r3
	ldrb r0, [r5]
	ldr r1, _080A674C  @ =0x00000B72
	add r2, r2, r1
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A6688
	ldrb r1, [r4, #5]
	mov r0, #15
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r4, #5]
	ldrh r3, [r4, #2]
	lsl r1, r3, #23
	lsr r1, r1, #23
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r2, _080A6740  @ =0x000001FF
	add r0, r2, #0
	and r1, r1, r0
	ldr r2, _080A6744  @ =0xFFFFFE00
	add r0, r2, #0
	and r3, r3, r0
	orr r3, r3, r1
	strh r3, [r4, #2]
_080A6688:
	mov r0, r8
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldr r3, _080A6750  @ =0xFFFFEA24
	add r4, r5, r3
_080A6696:
	ldr r3, _080A6730  @ =0x00000974
	add r3, r3, r10
	ldrb r0, [r3]
	add r0, r0, #8
	strb r0, [r3]
	mov r0, r9
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	ldr r2, _080A6708  @ =0x0000096C
	add r2, r2, r10
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080A66D0
	ldr r0, _080A6734  @ =0x00000975
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r3]
_080A66D0:
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #3
	beq _080A66DA
	b _080A65A6
_080A66DA:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A66E8:
	.4byte gRam
_080A66EC:
	.4byte 0x00000964
_080A66F0:
	.4byte 0x00000961
_080A66F4:
	.4byte gUnknown_0816A6E6
_080A66F8:
	.4byte gUnknown_0816A8EB
_080A66FC:
	.4byte 0x0000097C
_080A6700:
	.4byte 0x0000097D
_080A6704:
	.4byte 0x000017D6
_080A6708:
	.4byte 0x0000096C
_080A670C:
	.4byte gUnknown_0816B310
_080A6710:
	.4byte 0x00000968
_080A6714:
	.4byte gUnknown_03003E74
_080A6718:
	.4byte gUnknown_08169708
_080A671C:
	.4byte 0x0000FFFF
_080A6720:
	.4byte 0x0000C1FF
_080A6724:
	.4byte 0x00001723
_080A6728:
	.4byte 0x00001724
_080A672C:
	.4byte 0x0000F1FF
_080A6730:
	.4byte 0x00000974
_080A6734:
	.4byte 0x00000975
_080A6738:
	.4byte gUnknown_03002780
_080A673C:
	.4byte gUnknown_03003E68
_080A6740:
	.4byte 0x000001FF
_080A6744:
	.4byte 0xFFFFFE00
_080A6748:
	.4byte 0x0000108C
_080A674C:
	.4byte 0x00000B72
_080A6750:
	.4byte 0xFFFFEA24
	THUMB_FUNC_END sub_080A64F8

