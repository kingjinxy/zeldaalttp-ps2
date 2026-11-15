	THUMB_FUNC_START sub_080A581C
sub_080A581C: @ 0x080A581C
	push {r4,lr}
	ldr r3, _080A583C  @ =gRam
	ldr r0, _080A5840  @ =0x00000978
	add r4, r3, r0
	mov r0, #0
	strh r0, [r4]
	ldr r1, _080A5844  @ =0x00000964
	add r0, r3, r1
	ldrh r1, [r0]
	ldr r0, _080A5848  @ =gUnknown_08169EE7
	add r0, r1, r0
	ldrb r1, [r0]
	cmp r1, #255
	bne _080A584C
	mov r0, #1
	b _080A58BE
_080A583C:
	.4byte gRam
_080A5840:
	.4byte 0x00000978
_080A5844:
	.4byte 0x00000964
_080A5848:
	.4byte gUnknown_08169EE7
_080A584C:
	ldr r2, _080A5894  @ =0x0000096C
	add r0, r3, r2
	strh r1, [r0]
	add r2, r1, #0
	ldr r0, _080A5898  @ =gUnknown_0816B392
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #248
	and r0, r0, r2
	cmp r0, #0
	beq _080A58A8
	ldr r1, _080A589C  @ =0x0000178A
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080A5878
	add r0, r2, #0
	sub r0, r0, #8
	lsl r0, r0, #16
	lsr r2, r0, #16
_080A5878:
	mov r0, #255
	and r0, r0, r2
	ldr r2, _080A58A0  @ =0x00000974
	add r1, r3, r2
	add r2, r0, #0
	strh r0, [r1]
	ldr r1, _080A58A4  @ =0x00001744
	add r0, r3, r1
	strb r2, [r0]
	mov r0, #7
	and r0, r0, r2
	cmp r0, #0
	bne _080A58BC
	b _080A58B8
_080A5894:
	.4byte 0x0000096C
_080A5898:
	.4byte gUnknown_0816B392
_080A589C:
	.4byte 0x0000178A
_080A58A0:
	.4byte 0x00000974
_080A58A4:
	.4byte 0x00001744
_080A58A8:
	mov r0, #255
	and r0, r0, r1
	ldr r2, _080A58C4  @ =0x00000974
	add r1, r3, r2
	strh r0, [r1]
	ldr r2, _080A58C8  @ =0x00001743
	add r1, r3, r2
	strb r0, [r1]
_080A58B8:
	mov r0, #2
	strh r0, [r4]
_080A58BC:
	mov r0, #0
_080A58BE:
	pop {r4}
	pop {r1}
	bx r1
_080A58C4:
	.4byte 0x00000974
_080A58C8:
	.4byte 0x00001743
	THUMB_FUNC_END sub_080A581C

