	THUMB_FUNC_START sub_080361C0
sub_080361C0: @ 0x080361C0
	push {r4,r5,lr}
	ldr r0, _080361D4  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, #2
	beq _08036208
	cmp r0, #2
	bgt _080361D8
	cmp r0, #1
	beq _080361E2
	b _080362F8
_080361D4:
	.4byte gUnknown_03006C80
_080361D8:
	cmp r0, #3
	beq _08036238
	cmp r0, #4
	beq _08036288
	b _080362F8
_080361E2:
	ldr r2, _08036204  @ =gUnknown_03006A30
	ldr r1, [r2, #40]
	mov r4, #0
	mov r3, #0
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r1, #50]
	ldr r1, [r2, #40]
	sub r0, r0, #48
	strh r0, [r1, #54]
	ldr r0, [r2, #40]
	strh r3, [r0, #58]
	ldr r0, [r2, #40]
	add r0, r0, #42
	strb r4, [r0]
	b _080362F8
	.byte 0x00
	.byte 0x00
_08036204:
	.4byte gUnknown_03006A30
_08036208:
	ldr r1, _08036230  @ =gUnknown_03006A30
	ldr r2, [r1, #40]
	mov r5, #0
	mov r4, #0
	mov r0, #243
	lsl r0, r0, #1
	strh r0, [r2, #50]
	ldr r0, [r1, #40]
	mov r3, #228
	lsl r3, r3, #1
	strh r3, [r0, #54]
	ldr r0, [r1, #40]
	strh r4, [r0, #58]
	ldr r0, [r1, #40]
	add r0, r0, #42
	strb r5, [r0]
	add r1, r1, #184
	ldr r2, [r1]
	ldr r0, _08036234  @ =0x0000020A
	b _080362E8
_08036230:
	.4byte gUnknown_03006A30
_08036234:
	.4byte 0x0000020A
_08036238:
	ldr r0, _08036284  @ =gUnknown_03006A30
	mov r12, r0
	ldr r1, [r0, #40]
	mov r5, #0
	mov r4, #0
	mov r0, #234
	lsl r0, r0, #1
	strh r0, [r1, #50]
	mov r1, r12
	ldr r0, [r1, #40]
	mov r3, #228
	lsl r3, r3, #1
	strh r3, [r0, #54]
	ldr r0, [r1, #40]
	strh r4, [r0, #58]
	ldr r0, [r1, #40]
	add r0, r0, #42
	strb r5, [r0]
	add r1, r1, #184
	ldr r2, [r1]
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r2, #50]
	ldr r0, [r1]
	strh r3, [r0, #54]
	ldr r0, [r1]
	strh r4, [r0, #58]
	ldr r0, [r1]
	add r0, r0, #42
	strb r5, [r0]
	mov r1, #164
	lsl r1, r1, #1
	add r1, r1, r12
	ldr r2, [r1]
	mov r0, #135
	lsl r0, r0, #2
	b _080362E8
	.byte 0x00
	.byte 0x00
_08036284:
	.4byte gUnknown_03006A30
_08036288:
	ldr r0, _08036300  @ =gUnknown_03006A30
	mov r12, r0
	ldr r1, [r0, #40]
	mov r5, #0
	mov r4, #0
	mov r0, #225
	lsl r0, r0, #1
	strh r0, [r1, #50]
	mov r1, r12
	ldr r0, [r1, #40]
	mov r3, #228
	lsl r3, r3, #1
	strh r3, [r0, #54]
	ldr r0, [r1, #40]
	strh r4, [r0, #58]
	ldr r0, [r1, #40]
	add r0, r0, #42
	strb r5, [r0]
	add r1, r1, #184
	ldr r2, [r1]
	mov r0, #243
	lsl r0, r0, #1
	strh r0, [r2, #50]
	ldr r0, [r1]
	strh r3, [r0, #54]
	ldr r0, [r1]
	strh r4, [r0, #58]
	ldr r0, [r1]
	add r0, r0, #42
	strb r5, [r0]
	mov r1, #164
	lsl r1, r1, #1
	add r1, r1, r12
	ldr r2, [r1]
	ldr r0, _08036304  @ =0x0000020A
	strh r0, [r2, #50]
	ldr r0, [r1]
	strh r3, [r0, #54]
	ldr r0, [r1]
	strh r4, [r0, #58]
	ldr r0, [r1]
	add r0, r0, #42
	strb r5, [r0]
	mov r1, #236
	lsl r1, r1, #1
	add r1, r1, r12
	ldr r2, [r1]
	ldr r0, _08036308  @ =0x0000022E
_080362E8:
	strh r0, [r2, #50]
	ldr r0, [r1]
	strh r3, [r0, #54]
	ldr r0, [r1]
	strh r4, [r0, #58]
	ldr r0, [r1]
	add r0, r0, #42
	strb r5, [r0]
_080362F8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036300:
	.4byte gUnknown_03006A30
_08036304:
	.4byte 0x0000020A
_08036308:
	.4byte 0x0000022E
	THUMB_FUNC_END sub_080361C0

