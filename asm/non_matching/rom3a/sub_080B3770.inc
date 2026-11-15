	THUMB_FUNC_START sub_080B3770
sub_080B3770: @ 0x080B3770
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #4
	bl sub_08069D20
	ldr r4, _080B385C  @ =gRam
	ldr r0, _080B3860  @ =0x00000C99
	add r1, r4, r0
	mov r2, #0
	mov r8, r2
	mov r0, #32
	strb r0, [r1]
	ldr r3, _080B3864  @ =0x00000AB2
	add r0, r4, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	mov r1, #128
	ldr r3, _080B3868  @ =0x00000C9B
	add r2, r4, r3
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080B386C  @ =0x00000C9A
	add r1, r4, r0
	mov r0, #64
	strb r0, [r1]
	ldr r2, _080B3870  @ =0x0000050C
	add r1, r4, r2
	mov r2, #0
	mov r0, #248
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r3, _080B3874  @ =0x000009B4
	add r1, r4, r3
	mov r0, #22
	strb r0, [r1]
	ldr r1, _080B3878  @ =0x000009B5
	add r0, r4, r1
	mov r6, #1
	strb r6, [r0]
	ldr r1, _080B387C  @ =0x04000008
	ldr r3, _080B3880  @ =0x0000F407
	add r0, r3, #0
	strh r0, [r1]
	ldr r0, _080B3884  @ =0x00000514
	add r1, r4, r0
	ldr r0, _080B3888  @ =0x00003C47
	strh r0, [r1]
	ldr r3, _080B388C  @ =0x00000516
	add r1, r4, r3
	ldr r0, _080B3890  @ =0x0000F846
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r4, r0
	ldr r0, _080B3894  @ =0x00003E45
	strh r0, [r1]
	ldr r1, _080B3898  @ =0x0000051E
	add r0, r4, r1
	mov r3, r8
	strh r3, [r0]
	ldr r1, _080B389C  @ =0x00000998
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _080B38A0  @ =0x00000999
	add r0, r4, r3
	strb r2, [r0]
	mov r1, sp
	mov r2, #128
	lsl r2, r2, #2
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080B38A4  @ =0x0600E000
	ldr r5, _080B38A8  @ =0x01000400
	mov r0, sp
	add r2, r5, #0
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	mov r1, #127
	strh r1, [r0]
	ldr r1, _080B38AC  @ =0x0600F000
	add r2, r5, #0
	bl CpuSet
	bl sub_0812ECDC
	mov r3, #202
	lsl r3, r3, #4
	add r0, r4, r3
	mov r1, r8
	strh r1, [r0]
	bl sub_08133304
	bl sub_08130260
	ldr r2, _080B38B0  @ =0x00000CAA
	add r0, r4, r2
	strb r6, [r0]
	bl sub_08130384
	bl sub_08133644
	ldr r3, _080B38B4  @ =0x0000099B
	add r0, r4, r3
	strb r6, [r0]
	ldr r0, _080B38B8  @ =0x00000A5A
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080B385C:
	.4byte gRam
_080B3860:
	.4byte 0x00000C99
_080B3864:
	.4byte 0x00000AB2
_080B3868:
	.4byte 0x00000C9B
_080B386C:
	.4byte 0x00000C9A
_080B3870:
	.4byte 0x0000050C
_080B3874:
	.4byte 0x000009B4
_080B3878:
	.4byte 0x000009B5
_080B387C:
	.4byte 0x04000008
_080B3880:
	.4byte 0x0000F407
_080B3884:
	.4byte 0x00000514
_080B3888:
	.4byte 0x00003C47
_080B388C:
	.4byte 0x00000516
_080B3890:
	.4byte 0x0000F846
_080B3894:
	.4byte 0x00003E45
_080B3898:
	.4byte 0x0000051E
_080B389C:
	.4byte 0x00000998
_080B38A0:
	.4byte 0x00000999
_080B38A4:
	.4byte 0x0600E000
_080B38A8:
	.4byte 0x01000400
_080B38AC:
	.4byte 0x0600F000
_080B38B0:
	.4byte 0x00000CAA
_080B38B4:
	.4byte 0x0000099B
_080B38B8:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B3770

