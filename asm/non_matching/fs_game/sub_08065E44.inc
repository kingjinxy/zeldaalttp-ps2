	THUMB_FUNC_START sub_08065E44
sub_08065E44: @ 0x08065E44
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, _08065E60  @ =gUnknown_03006C80
	ldrb r0, [r1]
	cmp r0, #3
	beq _08065EE0
	cmp r0, #3
	bgt _08065E64
	cmp r0, #2
	beq _08065E6C
	b _080660B4
	.byte 0x00
	.byte 0x00
_08065E60:
	.4byte gUnknown_03006C80
_08065E64:
	cmp r0, #4
	bne _08065E6A
	b _08065FA4
_08065E6A:
	b _080660B4
_08065E6C:
	ldr r0, _08065EDC  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #244
	lsl r0, r0, #17
	str r0, [r1, #48]
	ldr r0, _08065EDC  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #158
	lsl r0, r0, #18
	str r0, [r1, #52]
	ldr r0, _08065EDC  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #0
	str r0, [r1, #56]
	ldr r0, _08065EDC  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _08065EDC  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #130
	lsl r1, r1, #18
	str r1, [r0, #48]
	ldr r1, _08065EDC  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _08065EDC  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _08065EDC  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _080660B4
_08065EDC:
	.4byte gUnknown_03006A30
_08065EE0:
	ldr r0, _08065FA0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #244
	lsl r0, r0, #17
	str r0, [r1, #48]
	ldr r0, _08065FA0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #158
	lsl r0, r0, #18
	str r0, [r1, #52]
	ldr r0, _08065FA0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #0
	str r0, [r1, #56]
	ldr r0, _08065FA0  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #252
	lsl r1, r1, #17
	str r1, [r0, #48]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #130
	lsl r1, r1, #18
	str r1, [r0, #48]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _08065FA0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _080660B4
	.byte 0x00
	.byte 0x00
_08065FA0:
	.4byte gUnknown_03006A30
_08065FA4:
	ldr r0, _080660B0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #240
	lsl r0, r0, #17
	str r0, [r1, #48]
	ldr r0, _080660B0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #158
	lsl r0, r0, #18
	str r0, [r1, #52]
	ldr r0, _080660B0  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	mov r0, #0
	str r0, [r1, #56]
	ldr r0, _080660B0  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #248
	lsl r1, r1, #17
	str r1, [r0, #48]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	add r1, r1, #184
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #128
	lsl r1, r1, #18
	str r1, [r0, #48]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #164
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #132
	lsl r1, r1, #18
	str r1, [r0, #48]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #158
	lsl r1, r1, #18
	str r1, [r0, #52]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #0
	str r1, [r0, #56]
	ldr r1, _080660B0  @ =gUnknown_03006A30
	add r0, r1, #0
	mov r0, #236
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _080660B4
_080660B0:
	.4byte gUnknown_03006A30
_080660B4:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08065E44

