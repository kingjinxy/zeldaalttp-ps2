	THUMB_FUNC_START sub_08129258
sub_08129258: @ 0x08129258
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	mov r2, sp
	mov r4, sp
	add r4, r4, #2
	ldr r1, _081292F8  @ =gRam
	ldr r3, _081292FC  @ =0x00001ACA
	add r0, r1, r3
	ldrh r3, [r0]
	ldr r0, _08129300  @ =0x00001AC8
	add r6, r1, r0
	mov r0, #0
	strh r3, [r6]
	strh r0, [r2]
	strh r0, [r4]
	ldr r2, _08129304  @ =0x0000098E
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r1, r4, #0
	cmp r0, #0
	bne _08129314
	add r0, r3, #0
	add r0, r0, #68
	strh r0, [r6]
	mov r5, #6
	mov r2, sp
	ldr r7, _08129308  @ =gUnknown_02000402
	mov r12, r6
	add r6, r1, #0
	ldr r3, _0812930C  @ =gUnknown_02010170
	mov r8, r3
_0812929C:
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	mov r3, r12
	ldrh r1, [r3]
	strh r1, [r0]
	ldrh r0, [r3]
	add r0, r0, #64
	strh r0, [r3]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	ldr r1, _08129310  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r7
	mov r1, #20
	strh r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	mov r3, #20
	sub r4, r5, #1
_081292CA:
	ldrh r1, [r2]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r7
	ldrh r0, [r6]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	ldrh r0, [r6]
	add r0, r0, #2
	strh r0, [r6]
	sub r3, r3, #1
	cmp r3, #0
	bne _081292CA
	add r5, r4, #0
	cmp r5, #0
	bne _0812929C
	b _08129382
_081292F8:
	.4byte gRam
_081292FC:
	.4byte 0x00001ACA
_08129300:
	.4byte 0x00001AC8
_08129304:
	.4byte 0x0000098E
_08129308:
	.4byte gUnknown_02000402
_0812930C:
	.4byte gUnknown_02010170
_08129310:
	.4byte 0x0000FFFE
_08129314:
	add r0, r3, #0
	add r0, r0, #66
	strh r0, [r6]
	mov r5, #6
	mov r2, sp
	ldr r7, _081293A0  @ =gUnknown_02000402
	mov r12, r6
	add r6, r4, #0
	ldr r0, _081293A4  @ =gUnknown_02010170
	mov r8, r0
_08129328:
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	mov r3, r12
	ldrh r1, [r3]
	strh r1, [r0]
	ldrh r0, [r3]
	add r0, r0, #64
	strh r0, [r3]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	ldr r1, _081293A8  @ =0x0000FFFE
	and r0, r0, r1
	add r0, r0, r7
	mov r1, #21
	strh r1, [r0]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	mov r3, #21
	sub r4, r5, #1
_08129356:
	ldrh r1, [r2]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r7
	ldrh r0, [r6]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r1]
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	ldrh r0, [r6]
	add r0, r0, #2
	strh r0, [r6]
	sub r3, r3, #1
	cmp r3, #0
	bne _08129356
	add r5, r4, #0
	cmp r5, #0
	bne _08129328
_08129382:
	mov r0, sp
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _081293A0  @ =gUnknown_02000402
	add r0, r0, r1
	ldr r2, _081293AC  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_081293A0:
	.4byte gUnknown_02000402
_081293A4:
	.4byte gUnknown_02010170
_081293A8:
	.4byte 0x0000FFFE
_081293AC:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08129258

	.ALIGN 2, 0
