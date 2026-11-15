	THUMB_FUNC_START sub_080B6694
sub_080B6694: @ 0x080B6694
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #8
	mov r4, #0
	str r4, [sp]
	ldr r1, _080B67D8  @ =gUnknown_02006880
	ldr r2, _080B67DC  @ =0x01000014
	mov r0, sp
	bl CpuFastSet
	add r0, sp, #4
	strh r4, [r0]
	ldr r1, _080B67E0  @ =0x06008000
	ldr r2, _080B67E4  @ =0x01001000
	bl CpuSet
	mov r0, sp
	add r0, r0, #6
	strh r4, [r0]
	ldr r1, _080B67E8  @ =0x06004000
	ldr r2, _080B67EC  @ =0x01002000
	bl CpuSet
	ldr r1, _080B67F0  @ =gRam
	ldr r0, _080B67F4  @ =0x0000050C
	add r2, r1, r0
	mov r0, #184
	lsl r0, r0, #5
	strh r0, [r2]
	ldr r2, _080B67F8  @ =0x04000008
	ldr r3, _080B67FC  @ =0x0000F004
	add r0, r3, #0
	strh r0, [r2]
	ldr r0, _080B6800  @ =0x00000514
	add r2, r1, r0
	ldr r0, _080B6804  @ =0x00003442
	strh r0, [r2]
	ldr r3, _080B6808  @ =0x00000516
	add r2, r1, r3
	ldr r0, _080B680C  @ =0x00003842
	strh r0, [r2]
	ldr r0, _080B6810  @ =0x00000954
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	ldr r2, _080B6814  @ =0x0000095A
	add r1, r1, r2
	mov r0, #13
	strh r0, [r1]
	ldr r6, _080B6818  @ =gUnknown_0816FF2E
	ldr r5, _080B681C  @ =gUnknown_02000800
	mov r4, #191
_080B66FE:
	ldrh r0, [r6]
	bl sub_08133468
	strh r0, [r5]
	add r6, r6, #2
	add r5, r5, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _080B66FE
	ldr r4, _080B67F0  @ =gRam
	ldr r3, _080B6820  @ =0x00000CAA
	add r0, r4, r3
	mov r1, #0
	mov r8, r1
	mov r6, #1
	strb r6, [r0]
	mov r2, #202
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r1, [r0]
	mov r5, #0
	strh r1, [r0]
	bl sub_08130384
	bl sub_081302F0
	ldr r1, _080B6824  @ =gUnknown_02000834
	ldr r3, _080B6828  @ =0x00007FFF
	add r0, r3, #0
	strh r0, [r1]
	ldr r1, _080B682C  @ =0x0000099B
	add r0, r4, r1
	strb r6, [r0]
	bl sub_080B6564
	ldr r2, _080B6830  @ =0x00001AD0
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080B6834  @ =0x00001AE8
	add r1, r4, r3
	ldr r0, _080B6838  @ =0x00000115
	strh r0, [r1]
	ldr r1, _080B683C  @ =0x00000958
	add r0, r4, r1
	mov r2, r8
	strh r2, [r0]
	ldr r1, _080B6840  @ =gUnknown_02006882
	ldrb r0, [r1]
	add r0, r0, #3
	strb r0, [r1]
	mov r0, #1
	bl sub_080B65DC
	mov r3, #157
	lsl r3, r3, #4
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _080B6844  @ =0x000009D1
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B6848  @ =0x000009D2
	add r1, r4, r2
	mov r0, #176
	strb r0, [r1]
	sub r3, r3, #24
	add r1, r4, r3
	mov r0, #3
	strb r0, [r1]
	ldr r1, _080B684C  @ =0x000009B9
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #4
	add r1, r4, r2
	mov r0, #37
	strb r0, [r1]
	add r3, r3, #31
	add r1, r4, r3
	mov r0, #69
	strb r0, [r1]
	ldr r0, _080B6850  @ =0x000009D8
	add r1, r4, r0
	mov r0, #133
	strb r0, [r1]
	sub r2, r2, #3
	add r1, r4, r2
	mov r0, #16
	strb r0, [r1]
	sub r3, r3, #3
	add r1, r4, r3
	mov r0, #163
	strb r0, [r1]
	ldr r0, _080B6854  @ =0x000009D5
	add r1, r4, r0
	mov r0, #192
	strb r0, [r1]
	ldr r1, _080B6858  @ =0x00000A3C
	add r4, r4, r1
	mov r0, #2
	strh r0, [r4]
	ldr r1, _080B685C  @ =gUnknown_02006887
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080B67D8:
	.4byte gUnknown_02006880
_080B67DC:
	.4byte 0x01000014
_080B67E0:
	.4byte 0x06008000
_080B67E4:
	.4byte 0x01001000
_080B67E8:
	.4byte 0x06004000
_080B67EC:
	.4byte 0x01002000
_080B67F0:
	.4byte gRam
_080B67F4:
	.4byte 0x0000050C
_080B67F8:
	.4byte 0x04000008
_080B67FC:
	.4byte 0x0000F004
_080B6800:
	.4byte 0x00000514
_080B6804:
	.4byte 0x00003442
_080B6808:
	.4byte 0x00000516
_080B680C:
	.4byte 0x00003842
_080B6810:
	.4byte 0x00000954
_080B6814:
	.4byte 0x0000095A
_080B6818:
	.4byte gUnknown_0816FF2E
_080B681C:
	.4byte gUnknown_02000800
_080B6820:
	.4byte 0x00000CAA
_080B6824:
	.4byte gUnknown_02000834
_080B6828:
	.4byte 0x00007FFF
_080B682C:
	.4byte 0x0000099B
_080B6830:
	.4byte 0x00001AD0
_080B6834:
	.4byte 0x00001AE8
_080B6838:
	.4byte 0x00000115
_080B683C:
	.4byte 0x00000958
_080B6840:
	.4byte gUnknown_02006882
_080B6844:
	.4byte 0x000009D1
_080B6848:
	.4byte 0x000009D2
_080B684C:
	.4byte 0x000009B9
_080B6850:
	.4byte 0x000009D8
_080B6854:
	.4byte 0x000009D5
_080B6858:
	.4byte 0x00000A3C
_080B685C:
	.4byte gUnknown_02006887
	THUMB_FUNC_END sub_080B6694

