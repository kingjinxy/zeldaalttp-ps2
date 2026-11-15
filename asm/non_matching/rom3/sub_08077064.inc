	THUMB_FUNC_START sub_08077064
sub_08077064: @ 0x08077064
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r0, _080770EC  @ =gUnknown_02018000
	ldr r1, _080770F0  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080770F4  @ =gUnknown_02018800
	ldr r1, _080770F8  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080770FC  @ =gUnknown_02019000
	ldr r1, _08077100  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077104  @ =gUnknown_02019800
	ldr r1, _08077108  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807710C  @ =gUnknown_02020000
	ldr r1, _08077110  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077114  @ =gUnknown_02020800
	ldr r1, _08077118  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807711C  @ =gUnknown_02021000
	ldr r1, _08077120  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077124  @ =gUnknown_02021800
	ldr r1, _08077128  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	ldr r5, _0807712C  @ =gRam
	ldr r2, _08077130  @ =gUnknown_0814CFA2
	ldr r1, _08077134  @ =0x000009C6
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	lsl r3, r0, #1
	add r2, r3, r2
	ldrh r2, [r2]
	ldr r6, _08077138  @ =0x000009BC
	add r0, r5, r6
	strh r2, [r0]
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #129
	bne _08077140
	ldr r1, _0807713C  @ =0x000009BE
	add r0, r5, r1
	strh r4, [r0]
	b _0807714C
	.byte 0x00
	.byte 0x00
_080770EC:
	.4byte gUnknown_02018000
_080770F0:
	.4byte 0x0600C000
_080770F4:
	.4byte gUnknown_02018800
_080770F8:
	.4byte 0x0600C800
_080770FC:
	.4byte gUnknown_02019000
_08077100:
	.4byte 0x0600D000
_08077104:
	.4byte gUnknown_02019800
_08077108:
	.4byte 0x0600D800
_0807710C:
	.4byte gUnknown_02020000
_08077110:
	.4byte 0x0600A000
_08077114:
	.4byte gUnknown_02020800
_08077118:
	.4byte 0x0600A800
_0807711C:
	.4byte gUnknown_02021000
_08077120:
	.4byte 0x0600B000
_08077124:
	.4byte gUnknown_02021800
_08077128:
	.4byte 0x0600B800
_0807712C:
	.4byte gRam
_08077130:
	.4byte gUnknown_0814CFA2
_08077134:
	.4byte 0x000009C6
_08077138:
	.4byte 0x000009BC
_0807713C:
	.4byte 0x000009BE
_08077140:
	ldr r0, _0807725C  @ =gUnknown_0814D022
	add r0, r3, r0
	ldrh r1, [r0]
	ldr r2, _08077260  @ =0x000009BE
	add r0, r5, r2
	strh r1, [r0]
_0807714C:
	ldr r2, _08077264  @ =gRam
	ldr r3, _08077268  @ =0x000009BA
	add r4, r2, r3
	mov r1, #0
	strb r1, [r4]
	ldr r5, _0807726C  @ =0x000009BB
	add r0, r2, r5
	strb r1, [r0]
	ldr r6, _08077270  @ =0x000009BC
	add r0, r2, r6
	ldrh r0, [r0]
	ldr r1, _08077274  @ =0x00000B94
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
	ldr r5, _08077260  @ =0x000009BE
	add r0, r2, r5
	ldrh r0, [r0]
	ldr r5, _08077278  @ =0x00000B98
	add r1, r2, r5
	strh r0, [r1]
	add r0, r0, r6
	add r5, r5, #2
	add r1, r2, r5
	strh r0, [r1]
	ldr r1, _0807727C  @ =gUnknown_0814FB70
	ldr r5, _08077280  @ =0x000009C6
	add r0, r2, r5
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077242
	ldr r0, _08077284  @ =0x00000958
	add r2, r2, r0
	ldrh r1, [r2]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldrh r1, [r3]
	cmp r0, r1
	beq _080771E6
	add r5, r4, #0
	add r4, r3, #0
	mov r8, r2
	add r7, r6, #0
	mov r6, r12
_080771B8:
	ldrb r0, [r5]
	cmp r0, #1
	bhi _080771E6
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
	bne _080771B8
_080771E6:
	ldr r2, _08077264  @ =gRam
	ldr r5, _08077288  @ =0x00000952
	add r0, r2, r5
	ldrh r1, [r0]
	mov r0, #248
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r6, _08077278  @ =0x00000B98
	add r1, r2, r6
	ldrh r3, [r1]
	cmp r0, r3
	beq _08077242
	ldr r6, _0807726C  @ =0x000009BB
	add r5, r2, r6
	add r4, r1, #0
	mov r0, #128
	lsl r0, r0, #1
	add r7, r0, #0
	ldr r1, _0807728C  @ =0x00000B9A
	add r6, r2, r1
_0807720E:
	ldrb r0, [r5]
	cmp r0, #1
	bhi _08077242
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
	ldr r3, _08077288  @ =0x00000952
	add r0, r2, r3
	ldrh r1, [r0]
	mov r3, #248
	lsl r3, r3, #5
	add r0, r3, #0
	and r0, r0, r1
	ldrh r1, [r4]
	cmp r0, r1
	bne _0807720E
_08077242:
	ldr r1, _08077264  @ =gRam
	ldr r2, _08077290  @ =0x000009AD
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
_0807725C:
	.4byte gUnknown_0814D022
_08077260:
	.4byte 0x000009BE
_08077264:
	.4byte gRam
_08077268:
	.4byte 0x000009BA
_0807726C:
	.4byte 0x000009BB
_08077270:
	.4byte 0x000009BC
_08077274:
	.4byte 0x00000B94
_08077278:
	.4byte 0x00000B98
_0807727C:
	.4byte gUnknown_0814FB70
_08077280:
	.4byte 0x000009C6
_08077284:
	.4byte 0x00000958
_08077288:
	.4byte 0x00000952
_0807728C:
	.4byte 0x00000B9A
_08077290:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08077064

