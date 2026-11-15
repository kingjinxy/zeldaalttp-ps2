	THUMB_FUNC_START sub_0803A030
sub_0803A030: @ 0x0803A030
	push {r4-r7,lr}
	sub sp, sp, #40
	mov r7, sp
	ldr r0, _0803A08C  @ =gUnknown_03006C80
	ldr r1, [r0]
	str r1, [r7]
	ldr r0, _0803A090  @ =gUnknown_03006CA8
	add r1, r7, #4
	ldr r2, _0803A094  @ =0x04000008
	bl CpuSet
	mov r0, #0
	str r0, [r7, #36]
	add r0, r7, #0
	add r0, r0, #36
	ldr r1, _0803A08C  @ =gUnknown_03006C80
	ldr r2, _0803A098  @ =0x05000024
	bl CpuSet
	ldr r0, _0803A08C  @ =gUnknown_03006C80
	ldr r1, [r7]
	str r1, [r0]
	add r0, r7, #4
	ldr r1, _0803A090  @ =gUnknown_03006CA8
	ldr r2, _0803A094  @ =0x04000008
	bl CpuSet
	bl sub_08039650
	add r1, r0, #0
	ldr r0, _0803A08C  @ =gUnknown_03006C80
	ldrb r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #6]
	ldr r0, _0803A08C  @ =gUnknown_03006C80
	ldr r1, _0803A08C  @ =gUnknown_03006C80
	ldrb r2, [r1, #2]
	cmp r2, #0
	bne _0803A09C
	ldr r2, _0803A08C  @ =gUnknown_03006C80
	ldrb r1, [r2, #1]
	b _0803A09E
_0803A08C:
	.4byte gUnknown_03006C80
_0803A090:
	.4byte gUnknown_03006CA8
_0803A094:
	.4byte 0x04000008
_0803A098:
	.4byte 0x05000024
_0803A09C:
	mov r1, #4
_0803A09E:
	ldrb r2, [r0, #7]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #7]
	ldr r0, _0803A204  @ =gUnknown_03006C80
	ldr r1, _0803A204  @ =gUnknown_03006C80
	ldr r2, _0803A204  @ =gUnknown_03006C80
	ldr r3, _0803A204  @ =gUnknown_03006C80
	add r4, r3, #0
	add r3, r3, #91
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	mov r6, #9
	add r4, r5, #0
	orr r4, r4, r6
	add r5, r4, #0
	strb r5, [r3]
	add r3, r2, #0
	add r2, r2, #90
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	mov r5, #9
	add r3, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #89
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #9
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #88
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A204  @ =gUnknown_03006C80
	ldr r1, _0803A204  @ =gUnknown_03006C80
	ldr r2, _0803A204  @ =gUnknown_03006C80
	ldr r3, _0803A204  @ =gUnknown_03006C80
	add r4, r3, #0
	add r3, r3, #99
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	mov r6, #40
	add r4, r5, #0
	orr r4, r4, r6
	add r5, r4, #0
	strb r5, [r3]
	add r3, r2, #0
	add r2, r2, #98
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	mov r5, #40
	add r3, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #97
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #40
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #96
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #40
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A204  @ =gUnknown_03006C80
	ldr r1, _0803A204  @ =gUnknown_03006C80
	ldr r2, _0803A204  @ =gUnknown_03006C80
	ldr r3, _0803A204  @ =gUnknown_03006C80
	add r4, r3, #0
	add r3, r3, #103
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	mov r6, #6
	add r4, r5, #0
	orr r4, r4, r6
	add r5, r4, #0
	strb r5, [r3]
	add r3, r2, #0
	add r2, r2, #102
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	mov r5, #6
	add r3, r4, #0
	orr r3, r3, r5
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #101
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #6
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #100
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803A204  @ =gUnknown_03006C80
	ldrh r1, [r0, #38]
	ldr r2, _0803A208  @ =0x0000FFFF
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #38]
	ldr r0, _0803A204  @ =gUnknown_03006C80
	ldrb r1, [r0, #3]
	cmp r1, #0
	beq _0803A1FC
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, _0803A204  @ =gUnknown_03006C80
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
_0803A1FC:
	add sp, sp, #40
	pop {r4-r7}
	pop {r0}
	bx r0
_0803A204:
	.4byte gUnknown_03006C80
_0803A208:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0803A030

