	THUMB_FUNC_START sub_08077294
sub_08077294: @ 0x08077294
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	bl sub_08076FAC
	ldr r0, _08077320  @ =gUnknown_02018000
	ldr r1, _08077324  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077328  @ =gUnknown_02018800
	ldr r1, _0807732C  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077330  @ =gUnknown_02019000
	ldr r1, _08077334  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077338  @ =gUnknown_02019800
	ldr r1, _0807733C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077340  @ =gUnknown_02020000
	ldr r1, _08077344  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077348  @ =gUnknown_02020800
	ldr r1, _0807734C  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077350  @ =gUnknown_02021000
	ldr r1, _08077354  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077358  @ =gUnknown_02021800
	ldr r1, _0807735C  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	ldr r5, _08077360  @ =gRam
	ldr r2, _08077364  @ =gUnknown_0814CFA2
	ldr r1, _08077368  @ =0x000009C6
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	lsl r3, r0, #1
	add r2, r3, r2
	ldrh r2, [r2]
	ldr r6, _0807736C  @ =0x000009BC
	add r0, r5, r6
	strh r2, [r0]
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #129
	bne _08077374
	ldr r1, _08077370  @ =0x000009BE
	add r0, r5, r1
	strh r4, [r0]
	b _08077380
	.byte 0x00
	.byte 0x00
_08077320:
	.4byte gUnknown_02018000
_08077324:
	.4byte 0x0600C000
_08077328:
	.4byte gUnknown_02018800
_0807732C:
	.4byte 0x0600C800
_08077330:
	.4byte gUnknown_02019000
_08077334:
	.4byte 0x0600D000
_08077338:
	.4byte gUnknown_02019800
_0807733C:
	.4byte 0x0600D800
_08077340:
	.4byte gUnknown_02020000
_08077344:
	.4byte 0x0600A000
_08077348:
	.4byte gUnknown_02020800
_0807734C:
	.4byte 0x0600A800
_08077350:
	.4byte gUnknown_02021000
_08077354:
	.4byte 0x0600B000
_08077358:
	.4byte gUnknown_02021800
_0807735C:
	.4byte 0x0600B800
_08077360:
	.4byte gRam
_08077364:
	.4byte gUnknown_0814CFA2
_08077368:
	.4byte 0x000009C6
_0807736C:
	.4byte 0x000009BC
_08077370:
	.4byte 0x000009BE
_08077374:
	ldr r0, _08077490  @ =gUnknown_0814D022
	add r0, r3, r0
	ldrh r1, [r0]
	ldr r2, _08077494  @ =0x000009BE
	add r0, r5, r2
	strh r1, [r0]
_08077380:
	ldr r2, _08077498  @ =gRam
	ldr r3, _0807749C  @ =0x000009BA
	add r4, r2, r3
	mov r1, #0
	strb r1, [r4]
	ldr r5, _080774A0  @ =0x000009BB
	add r0, r2, r5
	strb r1, [r0]
	ldr r6, _080774A4  @ =0x000009BC
	add r0, r2, r6
	ldrh r0, [r0]
	ldr r1, _080774A8  @ =0x00000B94
	add r3, r2, r1
	strh r0, [r3]
	mov r5, #128
	lsl r5, r5, #1
	add r6, r5, #0
	add r0, r0, r6
	add r1, r1, #2
	add r1, r1, r2
	mov r12, r1
	strh r0, [r1]
	ldr r5, _08077494  @ =0x000009BE
	add r0, r2, r5
	ldrh r0, [r0]
	ldr r5, _080774AC  @ =0x00000B98
	add r1, r2, r5
	strh r0, [r1]
	add r0, r0, r6
	add r5, r5, #2
	add r1, r2, r5
	strh r0, [r1]
	ldr r1, _080774B0  @ =gUnknown_0814FB70
	ldr r5, _080774B4  @ =0x000009C6
	add r0, r2, r5
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077476
	ldr r0, _080774B8  @ =0x00000958
	add r2, r2, r0
	ldrh r1, [r2]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldrh r1, [r3]
	cmp r0, r1
	beq _0807741A
	add r5, r4, #0
	add r4, r3, #0
	mov r8, r2
	add r7, r6, #0
	mov r6, r12
_080773EC:
	ldrb r0, [r5]
	cmp r0, #1
	bhi _0807741A
	ldrh r2, [r4]
	add r0, r7, r2
	strh r0, [r4]
	ldrh r3, [r6]
	add r0, r7, r3
	strh r0, [r6]
	bl sub_08075DF0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, r8
	ldrh r1, [r0]
	mov r2, #248
	lsl r2, r2, #5
	add r0, r2, #0
	and r0, r0, r1
	ldrh r3, [r4]
	cmp r0, r3
	bne _080773EC
_0807741A:
	ldr r2, _08077498  @ =gRam
	ldr r5, _080774BC  @ =0x00000952
	add r0, r2, r5
	ldrh r1, [r0]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r6, _080774AC  @ =0x00000B98
	add r1, r2, r6
	ldrh r3, [r1]
	cmp r0, r3
	beq _08077476
	ldr r6, _080774A0  @ =0x000009BB
	add r5, r2, r6
	add r4, r1, #0
	mov r0, #128
	lsl r0, r0, #1
	add r7, r0, #0
	ldr r1, _080774C0  @ =0x00000B9A
	add r6, r2, r1
_08077442:
	ldrb r0, [r5]
	cmp r0, #1
	bhi _08077476
	ldrh r3, [r4]
	add r0, r7, r3
	strh r0, [r4]
	ldrh r1, [r6]
	add r0, r7, r1
	strh r0, [r6]
	str r2, [sp]
	bl sub_080761EC
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r2, [sp]
	ldr r3, _080774BC  @ =0x00000952
	add r0, r2, r3
	ldrh r1, [r0]
	mov r3, #248
	lsl r3, r3, #5
	add r0, r3, #0
	and r0, r0, r1
	ldrh r1, [r4]
	cmp r0, r1
	bne _08077442
_08077476:
	ldr r1, _08077498  @ =gRam
	ldr r2, _080774C4  @ =0x000009AD
	add r1, r1, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077490:
	.4byte gUnknown_0814D022
_08077494:
	.4byte 0x000009BE
_08077498:
	.4byte gRam
_0807749C:
	.4byte 0x000009BA
_080774A0:
	.4byte 0x000009BB
_080774A4:
	.4byte 0x000009BC
_080774A8:
	.4byte 0x00000B94
_080774AC:
	.4byte 0x00000B98
_080774B0:
	.4byte gUnknown_0814FB70
_080774B4:
	.4byte 0x000009C6
_080774B8:
	.4byte 0x00000958
_080774BC:
	.4byte 0x00000952
_080774C0:
	.4byte 0x00000B9A
_080774C4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08077294

