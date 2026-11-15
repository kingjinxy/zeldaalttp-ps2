	THUMB_FUNC_START sub_080795F0
sub_080795F0: @ 0x080795F0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r3, _08079758  @ =gRam
	ldr r1, _0807975C  @ =0x00000964
	add r0, r3, r1
	ldrh r0, [r0]
	add r0, r0, #1
	mov r4, #252
	lsl r4, r4, #1
	add r2, r4, #0
	and r0, r0, r2
	lsl r0, r0, #3
	add r1, r1, #8
	add r7, r3, r1
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	ldrh r1, [r1]
	and r2, r2, r1
	lsr r2, r2, #3
	orr r0, r0, r2
	lsl r0, r0, #1
	strh r0, [r7]
	ldr r1, _08079760  @ =gUnknown_08152A70
	ldr r0, _08079764  @ =0x0000097C
	add r3, r3, r0
	ldrh r0, [r3]
	lsl r0, r0, #16
	asr r0, r0, #17
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r0, _08079768  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r8, r0
	lsl r6, r0, #1
	ldr r1, _0807976C  @ =gUnknown_02000404
	add r0, r6, r1
	mov r2, #1
	strh r2, [r0]
	ldr r3, _08079770  @ =gUnknown_02000406
	add r1, r6, r3
	ldrh r0, [r4]
	strh r0, [r1]
	ldr r1, _08079774  @ =gUnknown_0200040A
	add r0, r6, r1
	strh r2, [r0]
	add r3, r3, #6
	add r1, r6, r3
	ldrh r0, [r4, #2]
	strh r0, [r1]
	ldr r1, _08079778  @ =gUnknown_02000410
	add r0, r6, r1
	strh r2, [r0]
	add r3, r3, #6
	add r1, r6, r3
	ldrh r0, [r4, #4]
	strh r0, [r1]
	ldr r1, _0807977C  @ =gUnknown_02000416
	add r0, r6, r1
	strh r2, [r0]
	ldr r2, _08079780  @ =gUnknown_02000418
	add r1, r6, r2
	ldrh r0, [r4, #6]
	strh r0, [r1]
	mov r3, #0
	ldrsh r0, [r7, r3]
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	ldr r5, _08079784  @ =gUnknown_02018000
	add r0, r0, r5
	ldrh r1, [r4]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r0, r0, #128
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r4, #2]
	strh r1, [r0]
	mov r2, #0
	ldrsh r0, [r7, r2]
	add r0, r0, #2
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r4, #4]
	strh r1, [r0]
	mov r3, #0
	ldrsh r0, [r7, r3]
	add r0, r0, #130
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r5
	ldrh r1, [r4, #6]
	strh r1, [r0]
	ldrh r1, [r4]
	ldr r0, _08079788  @ =0x000003FF
	and r0, r0, r1
	ldr r4, _0807978C  @ =gUnknown_02002E40
	add r0, r0, r4
	ldrb r1, [r0]
	ldrh r0, [r7]
	lsl r0, r0, #16
	asr r2, r0, #17
	ldr r3, _08079790  @ =gUnknown_0200CBA0
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _08079794  @ =gUnknown_0200CBA1
	add r0, r2, r4
	strb r1, [r0]
	add r3, r3, #64
	add r0, r2, r3
	strb r1, [r0]
	add r4, r4, #64
	add r0, r2, r4
	strb r1, [r0]
	ldrh r1, [r7]
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	beq _080797B0
	ldr r4, _08079798  @ =0x00001FFF
	add r0, r4, #0
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	ldr r0, _0807979C  @ =gUnknown_02000402
	add r1, r6, r0
	ldr r3, _080797A0  @ =0xFFFFA000
	add r5, r3, #0
	add r0, r2, r5
	strh r0, [r1]
	ldrh r1, [r7]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	add r2, r0, #0
	ldr r0, _080797A4  @ =gUnknown_02000408
	add r1, r6, r0
	add r0, r2, r5
	strh r0, [r1]
	ldrh r1, [r7]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	add r2, r0, #0
	ldr r3, _080797A8  @ =gUnknown_0200040E
	add r1, r6, r3
	add r0, r2, r5
	strh r0, [r1]
	ldrh r0, [r7]
	and r4, r4, r0
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	add r2, r0, #0
	ldr r4, _080797AC  @ =gUnknown_02000414
	add r0, r6, r4
	add r5, r2, r5
	strh r5, [r0]
	b _08079802
	.byte 0x00
	.byte 0x00
_08079758:
	.4byte gRam
_0807975C:
	.4byte 0x00000964
_08079760:
	.4byte gUnknown_08152A70
_08079764:
	.4byte 0x0000097C
_08079768:
	.4byte gUnknown_02000400
_0807976C:
	.4byte gUnknown_02000404
_08079770:
	.4byte gUnknown_02000406
_08079774:
	.4byte gUnknown_0200040A
_08079778:
	.4byte gUnknown_02000410
_0807977C:
	.4byte gUnknown_02000416
_08079780:
	.4byte gUnknown_02000418
_08079784:
	.4byte gUnknown_02018000
_08079788:
	.4byte 0x000003FF
_0807978C:
	.4byte gUnknown_02002E40
_08079790:
	.4byte gUnknown_0200CBA0
_08079794:
	.4byte gUnknown_0200CBA1
_08079798:
	.4byte 0x00001FFF
_0807979C:
	.4byte gUnknown_02000402
_080797A0:
	.4byte 0xFFFFA000
_080797A4:
	.4byte gUnknown_02000408
_080797A8:
	.4byte gUnknown_0200040E
_080797AC:
	.4byte gUnknown_02000414
_080797B0:
	mov r1, #0
	ldrsh r0, [r7, r1]
	bl sub_08080380
	add r2, r0, #0
	ldr r3, _08079824  @ =gUnknown_02000402
	add r1, r6, r3
	ldr r0, _08079828  @ =0xFFFFC000
	add r4, r0, #0
	add r0, r2, r4
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r0, r0, #128
	bl sub_08080380
	add r2, r0, #0
	ldr r3, _0807982C  @ =gUnknown_02000408
	add r1, r6, r3
	add r0, r2, r4
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r0, r0, #2
	bl sub_08080380
	add r2, r0, #0
	ldr r3, _08079830  @ =gUnknown_0200040E
	add r1, r6, r3
	add r0, r2, r4
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r7, r1]
	add r0, r0, #130
	bl sub_08080380
	add r2, r0, #0
	ldr r3, _08079834  @ =gUnknown_02000414
	add r0, r6, r3
	add r4, r2, r4
	strh r4, [r0]
_08079802:
	mov r4, r8
	lsl r0, r4, #1
	ldr r1, _08079838  @ =gUnknown_0200041A
	add r0, r0, r1
	ldr r2, _0807983C  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _08079840  @ =gUnknown_02000400
	mov r0, r8
	add r0, r0, #12
	strh r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08079824:
	.4byte gUnknown_02000402
_08079828:
	.4byte 0xFFFFC000
_0807982C:
	.4byte gUnknown_02000408
_08079830:
	.4byte gUnknown_0200040E
_08079834:
	.4byte gUnknown_02000414
_08079838:
	.4byte gUnknown_0200041A
_0807983C:
	.4byte 0x0000FFFF
_08079840:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_080795F0

