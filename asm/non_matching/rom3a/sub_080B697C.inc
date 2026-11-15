	THUMB_FUNC_START sub_080B697C
sub_080B697C: @ 0x080B697C
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	sub sp, sp, #4
	mov r0, sp
	mov r1, #0
	mov r10, r1
	strh r1, [r0]
	ldr r1, _080B6A48  @ =0x06008000
	ldr r2, _080B6A4C  @ =0x01001000
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	mov r2, r10
	strh r2, [r0]
	ldr r1, _080B6A50  @ =0x06004000
	ldr r2, _080B6A54  @ =0x01002000
	bl CpuSet
	ldr r4, _080B6A58  @ =gRam
	ldr r0, _080B6A5C  @ =0x00000514
	add r1, r4, r0
	ldr r0, _080B6A60  @ =0x0000F442
	strh r0, [r1]
	ldr r2, _080B6A64  @ =0x00000516
	add r1, r4, r2
	ldr r0, _080B6A68  @ =0x0000F842
	strh r0, [r1]
	ldr r0, _080B6A6C  @ =0x00000C9C
	add r1, r4, r0
	mov r0, #10
	strh r0, [r1]
	bl sub_0812FB84
	ldr r6, _080B6A70  @ =gUnknown_02006880
	ldrh r1, [r6]
	mov r9, r1
	ldr r5, _080B6A74  @ =gUnknown_02006882
	ldrh r2, [r5]
	mov r8, r2
	mov r0, #116
	bl sub_0807958C
	mov r0, r9
	strh r0, [r6]
	mov r1, r8
	strh r1, [r5]
	ldr r2, _080B6A78  @ =0x00000CAE
	add r0, r4, r2
	mov r1, r10
	strb r1, [r0]
	sub r2, r2, #10
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B6A7C  @ =0x00000CA5
	add r1, r4, r0
	mov r0, #14
	strb r0, [r1]
	add r2, r2, #2
	add r1, r4, r2
	mov r0, #3
	strb r0, [r1]
	mov r0, #126
	mov r1, #0
	bl sub_080793C0
	ldr r1, _080B6A80  @ =gUnknown_02000834
	ldr r2, _080B6A84  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080B6A88  @ =0x00001AD0
	add r0, r4, r1
	mov r2, r10
	strb r2, [r0]
	ldr r0, _080B6A8C  @ =0x00001AE8
	add r1, r4, r0
	mov r0, #139
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r1, _080B6A90  @ =0x0000099D
	add r4, r4, r1
	strb r2, [r4]
	ldr r1, _080B6A94  @ =gUnknown_02006885
	mov r0, #2
	strb r0, [r1]
	add r1, r1, #7
	mov r0, #224
	strb r0, [r1]
	bl sub_080B68F4
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6A48:
	.4byte 0x06008000
_080B6A4C:
	.4byte 0x01001000
_080B6A50:
	.4byte 0x06004000
_080B6A54:
	.4byte 0x01002000
_080B6A58:
	.4byte gRam
_080B6A5C:
	.4byte 0x00000514
_080B6A60:
	.4byte 0x0000F442
_080B6A64:
	.4byte 0x00000516
_080B6A68:
	.4byte 0x0000F842
_080B6A6C:
	.4byte 0x00000C9C
_080B6A70:
	.4byte gUnknown_02006880
_080B6A74:
	.4byte gUnknown_02006882
_080B6A78:
	.4byte 0x00000CAE
_080B6A7C:
	.4byte 0x00000CA5
_080B6A80:
	.4byte gUnknown_02000834
_080B6A84:
	.4byte 0x00007FFF
_080B6A88:
	.4byte 0x00001AD0
_080B6A8C:
	.4byte 0x00001AE8
_080B6A90:
	.4byte 0x0000099D
_080B6A94:
	.4byte gUnknown_02006885
	THUMB_FUNC_END sub_080B697C

