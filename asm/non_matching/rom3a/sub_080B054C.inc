	THUMB_FUNC_START sub_080B054C
sub_080B054C: @ 0x080B054C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r2, #0
	ldr r4, _080B0650  @ =gRam
	ldr r0, _080B0654  @ =0x00001744
	add r1, r4, r0
	mov r0, #80
	strb r0, [r1]
	ldr r0, _080B0658  @ =0x00001832
	add r1, r4, r0
	mov r0, #64
	strb r0, [r1]
	ldr r1, _080B065C  @ =0x00000E1F
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _080B0660  @ =0x00000A88
	add r0, r4, r1
	mov r1, #8
	mov r8, r1
	mov r1, r8
	strb r1, [r0]
	ldr r1, _080B0664  @ =0x00001818
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _080B0668  @ =0x00001827
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080B066C  @ =0x00000E29
	add r0, r4, r1
	strb r2, [r0]
	ldr r1, _080B0670  @ =0x00001813
	add r0, r4, r1
	strb r2, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r2, r2, r4
	mov r9, r2
	ldrh r0, [r2]
	mov r1, #150
	lsl r1, r1, #4
	add r6, r4, r1
	mov r5, #0
	strh r0, [r6]
	ldr r2, _080B0674  @ =0x000016C4
	add r2, r2, r4
	mov r10, r2
	ldrh r0, [r2]
	add r1, r1, #4
	add r7, r4, r1
	strh r0, [r7]
	mov r0, #0
	bl sub_080ABA78
	ldr r2, _080B0678  @ =0x00000A92
	add r0, r4, r2
	strb r5, [r0]
	ldr r1, _080B067C  @ =0x00000A93
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B0680  @ =0x00001833
	add r1, r4, r2
	mov r0, #240
	strb r0, [r1]
	mov r1, #226
	lsl r1, r1, #4
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #31
	add r0, r4, r2
	strb r5, [r0]
	mov r1, #2
	ldr r2, _080B0684  @ =0x00000E2B
	add r0, r4, r2
	strb r1, [r0]
	strb r1, [r6]
	ldr r1, _080B0688  @ =0x00001846
	add r0, r4, r1
	mov r1, #3
	strb r1, [r0]
	ldr r2, _080B068C  @ =0x00001834
	add r0, r4, r2
	mov r2, r8
	strb r2, [r0]
	ldr r2, _080B0690  @ =0x00000E21
	add r0, r4, r2
	strb r5, [r0]
	add r2, r2, #30
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080B0694  @ =gUnknown_0817F0D4
	ldrb r0, [r6]
	ldrb r1, [r1, #3]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080B0698  @ =0x00001857
	add r4, r4, r1
	ldr r1, _080B069C  @ =gUnknown_0817F0AC
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r0, _080B06A0  @ =gUnknown_0817F268
	ldrh r0, [r0, #6]
	mov r2, r9
	ldrh r2, [r2]
	add r0, r0, r2
	sub r0, r0, #20
	strh r0, [r6]
	ldr r0, _080B06A4  @ =gUnknown_0817F270
	ldrh r0, [r0, #6]
	mov r1, r10
	ldrh r1, [r1]
	add r0, r0, r1
	sub r0, r0, #8
	strh r0, [r7]
	mov r0, #2
	bl sub_080ABA78
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0650:
	.4byte gRam
_080B0654:
	.4byte 0x00001744
_080B0658:
	.4byte 0x00001832
_080B065C:
	.4byte 0x00000E1F
_080B0660:
	.4byte 0x00000A88
_080B0664:
	.4byte 0x00001818
_080B0668:
	.4byte 0x00001827
_080B066C:
	.4byte 0x00000E29
_080B0670:
	.4byte 0x00001813
_080B0674:
	.4byte 0x000016C4
_080B0678:
	.4byte 0x00000A92
_080B067C:
	.4byte 0x00000A93
_080B0680:
	.4byte 0x00001833
_080B0684:
	.4byte 0x00000E2B
_080B0688:
	.4byte 0x00001846
_080B068C:
	.4byte 0x00001834
_080B0690:
	.4byte 0x00000E21
_080B0694:
	.4byte gUnknown_0817F0D4
_080B0698:
	.4byte 0x00001857
_080B069C:
	.4byte gUnknown_0817F0AC
_080B06A0:
	.4byte gUnknown_0817F268
_080B06A4:
	.4byte gUnknown_0817F270
	THUMB_FUNC_END sub_080B054C

